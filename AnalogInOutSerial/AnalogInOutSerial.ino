const int analogInPin = A0;  // Analog input pin that the potentiometer is attached to
const int ledCount = 10;
int ledPins[]={2,3,4,5,6,7,8,9,10,11};
void setup() {
  for(int ledBarup = 0; ledBarup < ledCount; ledBarup++ ){
    pinMode(ledPins[ledBarup],OUTPUT);
  }
}

void loop() {
  // read the analog in value:
  int sensorValue = analogRead(analogInPin);
  // map it to the range of the analog out:
  int outputValue = map(sensorValue, 280, 550, 0, ledCount);  //0-1023
  // change the analog out value:
for(int ledBarup = 0; ledBarup < ledCount; ledBarup++ ){
    if(ledBarup < outputValue){
       analogWrite(ledPins[ledBarup], HIGH);
    }
    else{
       analogWrite(ledPins[ledBarup],LOW);
    }            }        
}
