int pin = 13;
int blinkTime = 100;
//int exponent = 1;
void setup() 
{
  // put your setup code here, to run once:
  pinMode(pin, OUTPUT);
  
}

void loop() 
{
// put your main code here, to run repeatedly:
  digitalWrite(pin, HIGH);   
  delay(blinkTime);                      
  digitalWrite(pin, LOW);    
  delay(blinkTime);   
  // int blinkTime2 = blinkTime2 - 70;
  //int exponent = exponent + 1;
}
