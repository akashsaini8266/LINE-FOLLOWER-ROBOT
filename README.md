## LINE-FOLLOWER-ROBOT
A line follower robot which follows black line using ARDUINO UNO.

## INTODUCTION
A line follower robot follows black line with help of two ir sensors.The logic is very simple that IR(infrared waves)light emmits from IR transmittor which reflect from a colour surace other than black surface.With the help of this our robot follow the black line path.
Here, we use the behaviour of light on the black and white surface. The white colour reflects all the light that falls on it, whereas the black colour absorbs the light.In this project, when the IR sensor senses a white surface, an Arduino gets 1 ( HIGH ) as input, and when it senses a black line, an Arduino gets 0 ( LOW ) as input. Based on these inputs, an Arduino Uno provides the proper output to control the bot.

| SENSOR PINS   | INPUTS  | SENSOR PINS   | INPUTS    | OUTPUT       |
|---------------|---------|---------------|-----------|--------------|
|  LEFT         |   LOW   |   RIGHT       |  LOW      | STOP         |
|  LEFT         |   LOW   |   RIGHT       |  RIGHT    | RIGHT TURN   |
|  LEFT         |   HIGH  |   RIGHT       |  LOW      | LEFT  TURN   |
|  LEFT         |   HIGH  |   RIGHT       |  HIGH     | MOVE FORWARD |

> NOTE:- Here Low means 0volts and High means +5volts. 

## Components
  Arduino Uno              -1 \
  L293D motor driver       -1 \
  IR sensor module         -2 \
  7.4 battery              -1 \
  Motor wheel              -2 \
  Castor wheel             -1 \
  Hobby robot chassis      -1 

## Circuit
