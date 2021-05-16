
//CODE POUR LE MOTEUR :

const int motControl=3;  //define var


void setup() 
{
  pinMode(motControl,OUTPUT);            // Set pinMode
  Serial.begin(9600);
}

void loop() 
{
  int i = 0;
  analogWrite(motControl, i); // éclaire notre DEL à 75
  delay(10000); // temps au repos
  for (i = 0; i< 255 ; i++){
    // delay(1000);
    analogWrite(motControl, i); // éclaire notre DEL à 75
    delay (100);// temps entre chaque montée
    Serial.println(i);
  }
  delay(2000); // temps au max (dicté par alim)
}

//FIN CODE MOTEUR.





















