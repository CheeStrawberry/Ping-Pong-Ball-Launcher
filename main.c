void configureSensors(){
    SensorType[S1]=sensorEV3_Ultrasonic; 

    SensorType[S2]=sensorEV3_Gyro; 
    wait1Msec(50); 

    SensorMode[S2]=modeEV3Gyro_Calibration; 
    wait1Msec (100); 

    SensorMode[S2]=modeEV3Gyro_RateAndAngle; 
    wait1Msec(50); 

    return; 
}

void startCountdownMusic(){
    // play "5" tone
    for(int i=0; i<3; i++)
    {
        playTone(200,75);
        wait1Msec(1200);
    }

    // play "1" tone
    playTone(500,75);
    wait1Msec(1200);

    return;
}

void shootBall(int motor_pow){
    const int SLOW_SPEED_MOTOR=10;
    nMotorEncoder[motorA]=0;

    motor[motorA]=motor_pow;
    while(nMotorEncoder[motorA]<180)
    {}
    motor[motorA]=0;
    wwait1Msec(1000);

    motor[motorA] = SLOW_SPEED_MOTOR;
    while(nMotorEncoder[motorA]<360)
    {}
    motor[motorA]=0;
}

void rotateBot(int motor_pow,float angle){
    if (angle>0){
        motor[motorD]=-1*motor_pow;
        motor[motorB]=motor_pow;
        displayString(2,"yay");

        while(getGyroDegrees(S4)<angle){
            displayString(4,"%d",getGyroDegrees(S4));
        }
        motor[motorD]=motor[motorB]=0;
        }
    else if (angle<0){
        motor[motorD]=motor_pow;
        motor[motorB]=-1*motor_pow;
        displayString(2,"boo");

        while(getGyroDegress(S4)>angle){
            displayString(4,"%d",getGyroDegrees(S4));
        }
        motor[motorD]=motor[motorB]=0;
    }
}

void checkUltrasonic( int motor_pow_shoot, int motor_pow_rotate, int angle, int waitTime, int helpTimer){
    while(SensorValue[S1]<4.5){
        if(helpTimer==1)
        startCountdownMusic();

        shootBall(motor_pow_shoot);
        wait1Msec(500);
        rotateBot(motor_pow_rotate, angle);
        angle*=-1;
    }

    return;
}

void mediumMode(){
    const int SHOOT_POW=100;
    const int ROTATE_POW=20;
    int ROTATE_ANGLE=-15;
    const int WAIT_TIME=1500;
    const int HELPTIMER=1;
    checkUltrasonic(SHOOT_POW, ROTATE_POW, ROTATE_ANGLE, WAIT_TIME, HELPTIMER);

    return;
}

void hardMode(){
    const int SHOOT_POW=100;
    const int ROTATE_POW=20;
    int ROTATE_ANGLE=-15;
    const int WAIT_TIME=1500;
    const int HELPTIMER=0;
    startCountdownMusic();
    checkUltrasonic(SHOOT_POW, ROTATE_POW, ROTATE_ANGLE, WAIT_TIME, HELPTIMER);

    return;
}

void modes(){
    displayString(4, "Select the level for difficulty");
    displayString(5, "Select Left Button for Easy Mode");
    displayString(6, "Select Down BUtton for MEdium Mode");
    displayString(7, "Select Right Button for Hard Mode");

    while(!getButtonPress(ANY_BUTTON)){}
        if(getButtonPress(buttonLeft)){
            checkUltrasonic(100,0,0,1000,1)
        }
        else if(getButtonPress(buttonDown)){
            mediumMode();
        }
        else if(getButtonPress(buttonRight)){
            hardMode();
        }
}