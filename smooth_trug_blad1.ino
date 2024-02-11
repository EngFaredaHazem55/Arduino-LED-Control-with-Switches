int led1=9;
  int led2=8;
  int led3=4;
  int led4=3;
  int led5=2;
  int led6=1;
int switch1=11;
int switch2=10;


void setup()
{
  for(int i=3; i<=9; i++)
    pinMode(i,OUTPUT);
 pinMode(2,OUTPUT);
  pinMode(1,OUTPUT);
  pinMode(11,INPUT);
  pinMode(10,INPUT);
  
  
}
void loop()
{
  if (digitalRead(11)==1)
    
  {
  digitalWrite(9, HIGH);
  analogWrite(2,128);
    delay(50);
  }
  
  else
  {
     digitalWrite(9, LOW);
  analogWrite(2,LOW);
  }
  
   if (digitalRead(10)==1)
    
  {
  digitalWrite(4, HIGH);
  analogWrite(1,128);
    delay(50);
  }
    else
  {
     digitalWrite(4, LOW);
  analogWrite(1,LOW);
  }
   
  
 
}