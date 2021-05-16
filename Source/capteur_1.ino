
const int sensorPin = A0; //pin A0 to read analog input
int value; 

void setup(){
  Serial.begin(9600);
}

void loop(){
  value = analogRead(sensorPin);       //Read and save analog value from potentiometer

  Serial.println(value);               //Print value

  value = map(value, 0, 1023, 0, 255); //Map value 0-1023 to 0-255 (PWM)
  delay(100);                        //Small delay

}
