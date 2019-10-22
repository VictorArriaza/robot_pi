 #include <Servo.h>

Servo motor;
int golpe = 80;
int pin = 3;
char DatoSerial;
int opcion = 0;
void setup() {
  motor.attach (pin);
  Serial.begin(9600);
}

void loop()
{
  if(Serial.available() > 0){
   
    DatoSerial = Serial.read();
    Serial.print(DatoSerial);
    if(DatoSerial == '1'){
      Golpear();
    }
  }
}

void Golpear(){
  
  golpe = 60;
  motor.write (golpe);
  delay(100);

  golpe = 80;
  motor.write (golpe);
  delay(400);

  golpe = 60;
  motor.write (golpe);
  delay(100);
  
  golpe = 80;
  motor.write (golpe);
  delay(420);
  
 golpe = 60;
  motor.write (golpe);
  delay(150);
  
  golpe = 80;
  motor.write (golpe);
  delay(100);
  
  golpe = 60;
  motor.write (golpe);
  delay(150);
  
  golpe = 80;
  motor.write (golpe);
  delay(100);
  
  golpe = 60;
  motor.write (golpe);
  delay(150);
  
  golpe = 80;
  motor.write (golpe);
  delay(400);
}
