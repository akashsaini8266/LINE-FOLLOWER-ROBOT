#define vSpeed  210      // MAX 255
#define turn_speed  120    // MAX 255 
#define turn_delay  8
  
//L293 Connection  
// A = LEFT MOTOR 
//B == RIGHT MOTOR
 #define motorA1 A1
 #define motorA2 A0 
 #define motorAspeed 9
 #define motorB1 A3
 #define motorB2 A2 
 #define motorBspeed 10
 #define LEDPIN 12

//Sensor Connection
 #define left_sensor_pin 8
 #define right_sensor_pin 11

  
  
  int left_sensor_state;
  int right_sensor_state;

void setup() {
  pinMode(motorA1, OUTPUT);
  pinMode(motorA2, OUTPUT);
  pinMode(motorB1, OUTPUT);
  pinMode(motorB2, OUTPUT);
  pinMode(LEDPIN,OUTPUT);

  Serial.begin(9600);

  delay(3000);
  
}

void loop() {
left_sensor_state = digitalRead(left_sensor_pin);
right_sensor_state = digitalRead(right_sensor_pin);

if(right_sensor_state==0){
  if(left_sensor_state !=0)
{
  Serial.println("turning left");

  digitalWrite (motorA1,LOW);
  digitalWrite(motorA2,HIGH);                       
  digitalWrite (motorB1,LOW);
  digitalWrite(motorB2,HIGH);

  analogWrite (motorAspeed, vSpeed);
  analogWrite (motorBspeed, turn_speed);
  
  }
  else{
     Serial.println("moving forward");
  digitalWrite (motorA2,LOW);
  digitalWrite(motorA1,HIGH);                       
  digitalWrite (motorB2,HIGH);
  digitalWrite(motorB1,LOW);
  
  analogWrite (motorAspeed, vSpeed);
  analogWrite (motorBspeed, vSpeed);
  }
  }
else{ 
if(left_sensor_state !=0)
{
   Serial.println("STOP");
  
  analogWrite (motorAspeed, 0);
  analogWrite (motorBspeed, 0);
  digitalWrite(LEDPIN,HIGH);
  delay(2000);
  digitalWrite(LEDPIN,LOW);
  
}
else{
  Serial.println("turning RIGHT");
  
  digitalWrite (motorA1,HIGH);
  digitalWrite(motorA2,LOW);                       
  digitalWrite (motorB1,HIGH);
  digitalWrite(motorB2,LOW);

  analogWrite (motorAspeed, turn_speed);
  analogWrite (motorBspeed, vSpeed);

  delay(turn_delay);
}
  }
}
