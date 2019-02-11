
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
int a=0;
int b=0;
int c=0;

void setup() {
  Serial.begin(9600);
 
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
 
}

void loop() {  
 
  
    if (Serial.available() > 0) {
    char s = Serial.read();
    Serial.println(s);
      
   
    
 if (s == 'w') {
    Serial.print("FORWARD");
   
    analogWrite(motorPin1, HIGH);
    analogWrite(motorPin2, LOW);
    analogWrite(motorPin3, HIGH);
    analogWrite(motorPin4, LOW);
    analogWrite(motorPin5, HIGH);
    analogWrite(motorPin6, LOW);
    analogWrite(motorPin7, HIGH);
    analogWrite(motorPin8, LOW);
    analogWrite(motorPin9, HIGH);
    analogWrite(motorPin10, LOW);
    analogWrite(motorPin11, HIGH);
    analogWrite(motorPin12, LOW);
    }
    else if (s == 'd') {
    Serial.print("RIGHT");
   digitalWrite(motorPin1, HIGH);
    analogWrite(motorPin2, LOW);
    analogWrite(motorPin3, HIGH);
    analogWrite(motorPin4, LOW);
    analogWrite(motorPin5, HIGH);
    analogWrite(motorPin6, LOW);
    analogWrite(motorPin7, LOW);
    analogWrite(motorPin8, LOW);
    analogWrite(motorPin9, HIGH);
    analogWrite(motorPin10, LOW);
    analogWrite(motorPin11, LOW);
    analogWrite(motorPin12, LOW);
    
    }
    else if (s == 'a') {
      
    Serial.print("LEFT");
    analogWrite(motorPin1, LOW);
    analogWrite(motorPin2, LOW);
    analogWrite(motorPin3, HIGH);
    analogWrite(motorPin4, LOW);
    analogWrite(motorPin5, LOW);
    analogWrite(motorPin6, LOW);
    analogWrite(motorPin7, HIGH);
    analogWrite(motorPin8, LOW);
    analogWrite(motorPin9, HIGH);
    analogWrite(motorPin10, LOW);
    analogWrite(motorPin11, HIGH);
    analogWrite(motorPin12, LOW);
    }

      else if (s == 's') {
     
    Serial.print("STOP");
    analogWrite(motorPin1, LOW);
    analogWrite(motorPin2, LOW);
    analogWrite(motorPin3, LOW);
    analogWrite(motorPin4, LOW);
    analogWrite(motorPin5, LOW);
    analogWrite(motorPin6, LOW);
    analogWrite(motorPin7, LOW);
    analogWrite(motorPin8, LOW);
    analogWrite(motorPin9, LOW);
    analogWrite(motorPin10, LOW);
    analogWrite(motorPin11, LOW);
    analogWrite(motorPin12, LOW);
    }

     else if (s == 'q') {
      Serial.print("ULTRASONIC TURNED ON");
      a=analogRead(A0);
      if(a>100)
      { Serial.print("OBSTACLE DETECTED");
     }
     }


     else if (s == 'e') {
      Serial.print("MOTION TURNED ON");
      b=analogRead(A1);
      if(b>100)
      { Serial.print("MOTION DETECTED");
     }
     }

     else if (s == 'z') {
      Serial.print("GAS TURNED ON");
      c=analogRead(A2);
      if(c>100)
      { Serial.print("GAS DETECTED");
     }
     }
    }
    }

 


