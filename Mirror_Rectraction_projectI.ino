//This is a door mirror sensor project
#include <stdio.h>
#include <unistd.h>
#define SOS 345
#define ECHO_PIN 23
#define TRIGGER_PIN 22
#define MOTOR 25
void setup() {
  // put your setup code here, to run once:
  pinMode(TRIGGER_PIN,OUTPUT);
  pinMode(ECHO_PIN,INPUT);
  pinMode(MOTOR,OUTPUT);
  digitalWrite(TRIGGER_PIN,LOW);
  int stop_sec,stop_micro;
  int start_sec,start_micro;
  unsigned long rytec = micros();
  unsigned long neldi = 0;
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(TRIGGER_PIN,1);
  delayMicroseconds(10);
  digitalWrite(TRIGGER_PIN,0);
  while (digitalRead(ECHO_PIN)!=1){
    neldi = micros();
  }
  double elapsed = (neldi-rytec)/1e6;
  double distance_m = (SOS*elapsed)/2;//distance for milimeters
  double distance_cm = distance_m*100;
  double distance_in = distance_cm/2.54;
  if(distance_in<4){
    //framework for motor motion
    digitalWrite(MOTOR,1);
    delay(1);
    digitalWrite(MOTOR,0);


     }
  else if(distance_in<0){
    fprintf("FILE9",rdvk);
    
  }
  delay(1);
}
