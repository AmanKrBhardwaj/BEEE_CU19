//LED CHASER with delay
void setup()
{
  pinMode(1, OUTPUT);
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
}
void loop()
{ 
  for(int i=1;i<=4;i++)
  {
     digitalWrite(i,HIGH);
  	 delay(500);
  	 digitalWrite(i,LOW);
     delay(500);
  }
}
//Name - Aman Kumar
//UID - 19BCS3520
