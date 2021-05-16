//code pour le moteur et les potentio, A1= Portance  A2= trainée 
const int motControl=3;
const int sensorPin = A1;    //potentio pour portance
const int sensorPin2 = A0;    //potentio pour trainée 
int value;     //value pour portance 
int value2;    //value pour trainée 


void setup(){
  Serial.begin(9600);
  pinMode(motControl,OUTPUT);

}

void loop() {

  //partie moteur 
  int i = 0;
  analogWrite(motControl, i); // éclaire notre DEL à 75
  //delay(10000); // temps au repos
  for (i = 0; i< 255 ; i++){
    // delay(1000);
    analogWrite(motControl, i); // éclaire notre DEL à 75
      //partie capteur A1
  value = analogRead(sensorPin);
  //value = map(value, 0, 1023, 0, 255);
   
  
  //partie capteur A0
  value2 = analogRead(sensorPin2);
  //value2 = map(value2, 0, 1023, 0, 255);
  
    delay (100);// temps entre chaque montée
    Serial.print("Puissance moteur : ");
    Serial.print(i);
    Serial.print(" Portance : ");
    Serial.print(value);
    Serial.print(" Trainee : ");
    Serial.print(value2);
    Serial.println();
    
  }
  delay(2000); // temps au max (dicté par alim)
}
