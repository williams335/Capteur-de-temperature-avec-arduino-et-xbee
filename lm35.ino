#include <SoftwareSerial.h>

//Port de xbee
SoftwareSerial xbee(2, 3);

void setup()
{
 //connexion au xbee
 xbee.begin(9600);
 Serial.begin(9600);
 
 //connexion du bouton à la pin 4 de l'arduino
 pinMode(4, INPUT);
}
void loop()
{
 //Reception de la température à partir de A0
 float voltage = analogRead(A0);
 
 //Conversion pour obtenir la bonne température en dégrée celsius
 float temperature = (5.0*voltage*100.0)/1024.0;
 int tmp = int(temperature);
 String temp = String(tmp);
 String datatosend = String(0)+String(6)+" "+String(0)+String(1)+" "+temp;

 //Si le bouton est appuyé  envoyer la température au xbee
 if (digitalRead(4) == HIGH) {
    Serial.println("attente");
    delay(1000);
   }
   
 // Sinon afficher en attente 
 else{
    Serial.println(datatosend);
    xbee.println(datatosend);
     delay(1000);
    
 }
 
 
}
