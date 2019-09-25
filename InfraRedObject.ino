int sensor=2;

void setup() {
  pinMode(sensor,INPUT);
  pinMode(13,OUTPUT);
  Serial.begin(9600);
}

void loop() 
{
  if(digitalRead(sensor)==HIGH)
  {
    digitalWrite(13,HIGH);
    Serial.println("Object detected");
  }
  else
  {
    digitalWrite(13,LOW);
    Serial.println("Object not detected");
  }
  delay(1000);
  }
