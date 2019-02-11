
int motorPin1 = 2;
int motorPin2 = 3;
int motorPin3=  4;
int motorPin4=  5;
int motorPin5=  6;
int motorPin6=  7;
int motorPin7 = 8;
int motorPin8 = 9;
int motorPin9= 10;
int motorPin10= 11;
int motorPin11= 12;
int motorPin12= 13;

void setup() {
  
 
  pinMode(motorPin1, OUTPUT);
  pinMode(motorPin2, OUTPUT);
  pinMode(motorPin3, OUTPUT);
  pinMode(motorPin4,OUTPUT);
  pinMode(motorPin5, OUTPUT);
  pinMode(motorPin6,OUTPUT);
  pinMode(motorPin7, OUTPUT);
  pinMode(motorPin8, OUTPUT);
  pinMode(motorPin9, OUTPUT);
  pinMode(motorPin10,OUTPUT);
  pinMode(motorPin11, OUTPUT);
  pinMode(motorPin12,OUTPUT);
 Serial.begin(9600);
}

void loop() {  
 
  
    if (Serial.available() > 0) {
    char s = Serial.read();
    Serial.println(s);
      
   
     if (s == 'w') {
    Serial.print("FORWARD");
   
    digitalWrite(motorPin1, HIGH);
    digitalWrite(motorPin2, LOW);
    digitalWrite(motorPin3, LOW);
    digitalWrite(motorPin4, HIGH);
    digitalWrite(motorPin5, HIGH);
    digitalWrite(motorPin6, LOW);
    digitalWrite(motorPin7, LOW);
    digitalWrite(motorPin8, HIGH);
    digitalWrite(motorPin9, HIGH);
    digitalWrite(motorPin10, LOW);
    digitalWrite(motorPin11, HIGH);
    digitalWrite(motorPin12, LOW);
    }
   else if (s == 'd') {
    Serial.print("RIGHT");
    digitalWrite(motorPin1, LOW);
    digitalWrite(motorPin2, LOW);
    digitalWrite(motorPin3, LOW);
    digitalWrite(motorPin4, HIGH);
    digitalWrite(motorPin5, HIGH);
    digitalWrite(motorPin6, LOW);
    digitalWrite(motorPin7, LOW);
    digitalWrite(motorPin8, LOW);
    digitalWrite(motorPin9, LOW);
    digitalWrite(motorPin10, LOW);
    digitalWrite(motorPin11, HIGH);
    digitalWrite(motorPin12, LOW);
        }
    else if (s == 'a') {
      
    Serial.print("LEFT");
    digitalWrite(motorPin1, HIGH);
    digitalWrite(motorPin2, LOW);
    digitalWrite(motorPin3, LOW);
    digitalWrite(motorPin4, LOW);
    digitalWrite(motorPin5, LOW);
    digitalWrite(motorPin6, LOW);
    digitalWrite(motorPin7, LOW);
    digitalWrite(motorPin8, HIGH);
    digitalWrite(motorPin9, HIGH);
    digitalWrite(motorPin10, LOW);
    digitalWrite(motorPin11, LOW);
    digitalWrite(motorPin12, LOW);
    }

      else if (s == 's') {
     
    Serial.print("STOP");
    digitalWrite(motorPin1, LOW);
    digitalWrite(motorPin2, LOW);
    digitalWrite(motorPin3, LOW);
    digitalWrite(motorPin4, LOW);
    digitalWrite(motorPin5, LOW);
    digitalWrite(motorPin6, LOW);
    digitalWrite(motorPin7, LOW);
    digitalWrite(motorPin8, LOW);
    digitalWrite(motorPin9, LOW);
    digitalWrite(motorPin10, LOW);
    digitalWrite(motorPin11, LOW);
    digitalWrite(motorPin12, LOW);
    }
     
    }
}
 


