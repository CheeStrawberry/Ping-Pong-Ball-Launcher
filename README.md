# Ping-Pong-Ball-Launcher 🏓🤖

Ever wanted to play ping pong but don’t have a partner? No worries, I’ve got just the thing for you! Introducing the **Ping Pong Ball Launcher**: a LEGO Mindstorms EV3 robot that steps in as your perfect solo opponent. This project turns your EV3 kit into a smart, ball-launching machine, ready to sharpen your reflexes and bring the fun.

To get started, you'll need to install the RobotC IDE, connect your LEGO robot, and load the code into it. Once everything is set up, you’re ready to code, create, and enjoy some high-tech ping pong action!

## Features ✨

- **Targeting with Sensors**:
  - **Ultrasonic Sensor**: Detects objects and triggers the ball launch when in range. 
  - **Gyro Sensor**: Ensures precise rotation, aligning every shot perfectly. 

- **Countdown Music**: Adds a suspenseful tone sequence before each launch. 

- **Ball Launching Mechanism**: Adjustable motor power for precise and powerful shots. 

- **Smart Rotation**: Rotates the robot to the perfect angle for each launch. 

- **Difficulty Modes**:
  - **Easy Mode**: Straightforward shooting, no rotation. 
  - **Medium Mode**: Adds rotational challenges for more fun. 
  - **Hard Mode**: For experts, with complex movements and no countdown assist. 

## Project Structure 🛠️

- **configureSensors()**: Sets up the Ultrasonic and Gyro sensors to make sure your robot is ready for action.
- **startCountdownMusic()**: Plays a cool countdown sequence before the ball is launched.
- **shootBall()**: Controls the launcher motor to shoot the ball at your chosen power level.
- **rotateBot()**: Uses the Gyro sensor to rotate the robot to the perfect angle for your shot.
- **checkUltrasonic()**: Keeps an eye on the target using the Ultrasonic sensor and decides when to launch the ball.
- **mediumMode()**: Engages medium difficulty with added rotation for a greater challenge.
- **hardMode()**: The ultimate test of skill – harder movements and no countdown assistance.
- **modes()**: Displays a menu on the EV3 screen, letting you choose your difficulty level.
- **startup()**: Prepares the robot and waits for you to kick off the game.
- **ending()**: Wraps up the game with a fun tune and a message of encouragement!

## How to Play 🎮

1. **Assemble**: Build your EV3 robot with the Ultrasonic and Gyro sensors, and connect the motors as per the instructions.
2. **Upload**: Send the code to your EV3 brick using the RobotC IDE.
3. **Play**: Run the program on your EV3. Choose your difficulty, and get ready to launch some ping pong balls!
4. **Enjoy**: Watch your robot in action and challenge your friends to see who can hit the most targets!

## Requirements 📋

- LEGO Mindstorms EV3 kit
- RobotC IDE
- Ping Pong balls
- An assembled EV3 robot equipped with:
  - Ultrasonic Sensor
  - Gyro Sensor
  - Motors connected to Ports A, B, and D

## Pictures 🖼️

*Vertical Storage System:*

![Vertical Storage](https://github.com/user-attachments/assets/008da1d2-d9e3-443a-884e-7d2099b96ba0)

*Tension based Shooting Mechanism:*

![Shooting Mechanism](https://github.com/user-attachments/assets/1485feec-aec8-44d1-b66a-eac0a7c50ff6)

*Ultrasonic Sensor used to detect if more balls are left:*

![Ultrasonic Sensor](https://github.com/user-attachments/assets/c212a907-c429-4d2d-8931-5a27b6f99a8b)

## License 📜

This project is licensed under the MIT License. Check out the LICENSE file for more details.

##
