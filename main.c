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