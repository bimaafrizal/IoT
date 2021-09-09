char saklar; 
 
void setup() { 
 
  Serial.begin(9600); //setup software serial  
  pinMode(13, OUTPUT);
  } 
 
void loop()  { 
 
  saklar = Serial.read();  
  if (saklar == '1') 
  {     
    digitalWrite(13, HIGH);  
    }   else digitalWrite(13, LOW);     
    delay(200); } 
