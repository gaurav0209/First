int led=9;
int brightness=0;
int fade=5;
void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
pinMode(led,OUTPUT);
}

void loop() 
{
  // put your main code here, to run repeatedly:
 analogWrite(9,brightness);
 brightness = brightness + fade;
 delay(6);
 if(brightness==255)
 {
  while(brightness>=0)
  {
    analogWrite(9,brightness);
  brightness=brightness-fade;
  delay(4);
 }
 }
}
