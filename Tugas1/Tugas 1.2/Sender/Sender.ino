void setup() {   
  Serial.begin(9600);  
  pinMode(13, INPUT_PULLUP);     
}
 
void loop()  { 
 
if (digitalRead(13) == 0)
{    
  Serial.write('1'); 
}
delay(100);
}
 
