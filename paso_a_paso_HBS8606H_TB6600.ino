int PUL = 7;
int DIR = 6;
int EN = 5;

//motor pequeño 800 pulsos delay 400
//motor mediano 400 2/b pulsos delay 300
//motor grande 1600 púlsos delay 100

void setup() {

  pinMode(PUL, OUTPUT);
  pinMode(DIR, OUTPUT);
  pinMode(EN, OUTPUT);
  digitalWrite(EN,HIGH);
  
}

void loop() {
  
  digitalWrite(DIR,LOW);
  for (int i=0; i<10000;i++)
  {
    digitalWrite(PUL,HIGH);
    delayMicroseconds(300);
    digitalWrite(PUL,LOW);
    delayMicroseconds(300);    
  }

  delay(1000);
  digitalWrite(DIR,HIGH);
  
  for (int i=0; i<10000;i++)
  {
    digitalWrite(PUL,HIGH);
    delayMicroseconds(300);
    digitalWrite(PUL,LOW);
    delayMicroseconds(300);      
  }
  delay(1000);

  
}
