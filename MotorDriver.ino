int enableA=2;
int motorA1=6;
int motorA2=7;

//int enableB=3;
int motorB1=4;
int motorB2=5;

void setup() 
{
  // put your setup code here, to run once:
Serial.begin(9600);
pinMode (enableA, OUTPUT);
pinMode (motorA1, OUTPUT);
pinMode (motorA2, OUTPUT);
//pinMode (enableB, OUTPUT);
pinMode (motorB1, OUTPUT);
pinMode (motorB2, OUTPUT);
digitalWrite (enableA, HIGH);
}

void loop() 
{
  // put your main code here, to run repeatedly:
  
  char ch;
  if(Serial.available())
  {

   ch=(char)Serial.read();
  }
// printf("enter 'f'to move forward ;'b' to move backward and 's'to stop");
 //scanf("%c",&ch);
 //fflush(stdin);
 
 
 //digitalWrite (enableB, HIGH);
 if(ch=='f')
{   
   Serial.println ("Motion Forward");
   digitalWrite (motorA1, LOW);
   digitalWrite (motorA2, HIGH);
   digitalWrite (motorB1, LOW);
   digitalWrite (motorB2, HIGH);
   delay(2000);
}
 else if(ch=='b')
{
   Serial.println ("Motion Backward");
   digitalWrite (motorA1,HIGH);
   digitalWrite (motorA2,LOW);
   digitalWrite (motorB1,HIGH);
   digitalWrite (motorB2,LOW);
   delay (2000);
}
 else if(ch=='s')
 {
   Serial.println ("Stopping...");
  // digitalWrite (enableA, LOW);
  // digitalWrite (enableB, LOW);
  digitalWrite (motorA1, LOW);
   digitalWrite (motorA2, LOW);
   digitalWrite (motorB1, LOW);
   digitalWrite (motorB2, LOW);
   delay (2000);
 }
 }
