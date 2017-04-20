#include <Adafruit_SoftServo.h>

Adafruit_SoftServo servo_left, servo_rght;
int dis = 0;  // last measured distance
int consdis = 0; //
int adj = 0;

void setup() {

  servo_rght.attach(0); // D0
  servo_left.attach(1); // D1 = LED too
  pinMode (2, INPUT);  // D2 = A1

}

void loop() {

  dis = analogRead(1); //to read an analog voltage on pin #2, you would call analogRead(1) -> 0 to 1023
  //adj=00; //mostly forward
  //adj=50; //not sensitive enough
  //adj=70; //stops but doesn't reverse
  adj=80; //sometimes doesn't go forward especially into sunlight
  consdis=constrain((dis-500)/2.2-adj,0,180);
  if (consdis>92){
    //allow reading to set value for servos
    // Setting servos in forward motion at varying speed.
    //servo_left.write(101); // 72 reverse to 101 forward, 85 to 90 full stop
    servo_left.write(consdis);
    servo_left.refresh();
    //servo_rght.write(72); // 72 forward to 101 reverse, 85 to 90 full stop
    servo_rght.write(constrain(175-consdis,0,180));
    servo_rght.refresh();
    delay(15);
  }
  else{
    // Set servos in turn (reverse) motion instead of just stopping or straight reverse.
    for (int i = 0; i < 150; i++) {
      servo_left.write(60); //72 reverse to 101 forward: reverse quickly
      servo_left.refresh();
      servo_rght.write(95); //72 forward to 101 reverse: reverse slowly
      servo_rght.refresh();
      delay(15);  
    }
  }
}
    
