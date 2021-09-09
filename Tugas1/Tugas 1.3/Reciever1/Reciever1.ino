char saklar; 

void setup() {
  // put your setup code here, to run once:

   Serial.begin(9600); 
  
   pinMode(13, OUTPUT); 

}

void loop() {
  saklar = Serial.read();  
  if (saklar == '1') 
  {     
    digitalWrite(13, HIGH);  
    }   else digitalWrite(13, LOW); 
    delay(200); 

}
