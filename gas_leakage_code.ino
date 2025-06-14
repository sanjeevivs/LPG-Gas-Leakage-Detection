```cpp
#include<Servo.h>

int rled = 2, buzz = 7, sensor = A5;
Servo s;

void setup() {
  s.attach(9);
  pinMode(sensor, INPUT);
  pinMode(rled, OUTPUT);
  pinMode(buzz, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  int val = analogRead(A5);
  if (val > 450) {
    digitalWrite(rled, HIGH);
    digitalWrite(buzz, HIGH);
    s.write(20);
  } else {
    digitalWrite(rled, LOW);
    digitalWrite(buzz, LOW);
    s.write(180);
  }
  Serial.println(val);
  delay(500);
}
```
