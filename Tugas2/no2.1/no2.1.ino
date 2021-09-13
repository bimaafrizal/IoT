#include <SD.h> // library sd card

int cs = 4; 
File file; 
String namafile = "termo.txt";

//LM35
const int hTemp = A1;
float temp, data;

void setup() {
  Serial.begin(9600); 
  pinMode(hTemp, INPUT);
  pinMode(cs, OUTPUT); // chip select pin  harus di set ke OUTPUT mode
  if (!SD.begin(cs)) { // Menginisialisasi SD card
    Serial.println("Tidak bisa Menginisialisasi SD card."); 
  }
  
  if (SD.exists("termo.txt")) { 
    Serial.println("File \"termo.txt\" sudah ada, file akan dihapus."); delay(300);
    if (SD.remove("termo.txt") == true) {
      Serial.println("File berhasil dihapus.");
    } else {
      Serial.println("File tidak dapat dihapus.");
    }

    delay(600);
  }
}
void loop() {
  temp = analogRead(hTemp);
  file = SD.open(namafile, FILE_WRITE); // membuka termo.txt untuk write data
  if (file) {
    temp = temp * 500/ 1024;
    file.print("Suhu : "); file.print(temp); file.print(" C ");
    temp = temp *9/5 +32; file.print(temp); file.print(" F. ");
    temp = temp *4/5; file.print(temp); file.println(" R.");
    
    file.close(); // menutup file
  } else {
    Serial.println("Tidak dapat menulis pada file.");
  }
  
  file = SD.open(namafile, FILE_READ); // membuka "file.txt" 
  if (file) {
    Serial.println("--- Isi File ---");
    char character;
    while ((character = file.read()) != -1) { 
      Serial.print(character);
    }
    file.close();
    Serial.println("--- Selesai ---");
  } else {
    Serial.println("Tidak bisa membaca file.");
  }
  delay(2000); //delay 2 detik
  Serial.write(12); //cls
}
