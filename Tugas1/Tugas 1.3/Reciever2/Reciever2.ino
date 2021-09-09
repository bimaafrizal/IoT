char saklar; 

void setup() {
  // put your setup code here, to run once:

   Serial.begin(9600); 
  
   pinMode(12, OUTPUT); 

}

void loop() {
  saklar = Serial.read();  
  if (saklar == '2') 
  {     
    digitalWrite(12, HIGH);  
    }   else digitalWrite(12, LOW); 
    delay(200); 

}
