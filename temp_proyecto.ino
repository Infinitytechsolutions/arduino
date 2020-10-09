int redPin = 9;
int greenPin = 10;
int bluePin = 11;
int pinBuzzer = 5;

void setup() {
   pinMode(redPin, OUTPUT);
  pinMode(greenPin, OUTPUT);
  pinMode(bluePin, OUTPUT);  
  Serial.begin(9600);

}

void verde(void)
{
  digitalWrite(bluePin,LOW);
  digitalWrite(greenPin,LOW);
  digitalWrite(redPin,LOW);
  delay(300);
   digitalWrite(redPin,LOW);
  digitalWrite(greenPin,HIGH);
  digitalWrite(bluePin,LOW);
  delay(300);
  
}

void rojo2(void)
{
  digitalWrite(bluePin,LOW);
  digitalWrite(greenPin,LOW);
  digitalWrite(redPin,LOW);
  delay(300);
  digitalWrite(redPin,HIGH);
  delay(300);
  //generar tono de 523Hz durante 500ms, y detenerlo durante 500ms.
  tone(pinBuzzer, 523, 300);
  delay(100);
 
  //detener tono durante 500ms  
  noTone(pinBuzzer);
  delay(100);
  
  
}

void azul(void)
{
    digitalWrite(redPin,LOW);
    digitalWrite(greenPin,LOW);
    digitalWrite(bluePin,HIGH);
    delay(100);
  
}

void loop() {

  int x = 0;
  
   do { 
    x++;
char option = Serial.read();
if(x  == 1)
{
 Serial.println(x);
 azul(); 
 delay(100);
}else if (x  == 2) 
{
  Serial.println(x); 
  rojo2();
  
  delay(100);
}else if (x  == 3) 
{
  Serial.println(x); 
   verde(); 
  delay(100); 
}

  
   } while (x < 4);

}
