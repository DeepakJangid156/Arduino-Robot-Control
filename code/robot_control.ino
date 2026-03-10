// Autonomous Robot Control Example

int leftMotor = 9;
int rightMotor = 10;

int sensorLeft = A0;
int sensorRight = A1;

void setup() {

  pinMode(leftMotor, OUTPUT);
  pinMode(rightMotor, OUTPUT);

  pinMode(sensorLeft, INPUT);
  pinMode(sensorRight, INPUT);

}

void loop() {

  int leftValue = analogRead(sensorLeft);
  int rightValue = analogRead(sensorRight);

  if(leftValue < 500 && rightValue < 500) {
    
    // move forward
    digitalWrite(leftMotor, HIGH);
    digitalWrite(rightMotor, HIGH);
    
  }

  else if(leftValue < 500) {

    // turn left
    digitalWrite(leftMotor, LOW);
    digitalWrite(rightMotor, HIGH);

  }

  else if(rightValue < 500) {

    // turn right
    digitalWrite(leftMotor, HIGH);
    digitalWrite(rightMotor, LOW);

  }

}
