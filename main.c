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