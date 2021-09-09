void setup() {
  Serial.begin(9600);  
  pinMode(13, INPUT_PULLUP);   
  pinMode(12, INPUT_PULLUP); 
  } 
void loop() {
  // put your main code here, to run repeatedly:
if (digitalRead(13) == 0)
{    
  Serial.write('1'); 
  } 
  if (digitalRead(12) == 0)
{    
  Serial.write('2'); 
  }
  delay(100); 
}
