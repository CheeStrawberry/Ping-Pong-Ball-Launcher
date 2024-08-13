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