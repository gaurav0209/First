int TrackPin[10];
int val[10]={0,0,10,20,30,40,50,60,70,80};
int sum=0;
void setup() 
{
  // put your setup code here, to run once:
  TrackPin[0]=0;
  TrackPin[1]=0;
  for(int i=2;i<10;i++)
 {
 pinMode(TrackPin[i],INPUT);
}
 Serial.begin(9600);  

}

void loop()
{
  // put your main code here, to run repeatedly:
  for(int i=2;i<10;i++)
  {
 
if(digitalRead(TrackPin[i])==HIGH)
 {
  Serial.println(val[i]);
  //sum+=val[i];
  }
 
  }
  float x=sum/8;
 Serial.print("Lane value = ");
 Serial.println(x);
 delay(200);
  sum=0;
  
}
