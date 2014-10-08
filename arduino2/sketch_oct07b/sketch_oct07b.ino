

int ledPin=9;     //define a pin for LED
int brightness = 0;

void setup(){
  //initialize serial communication at 9600
    Serial.begin(9600);  //Begin serial communcation
    pinMode( ledPin, OUTPUT );
}

void loop(){
  int sensorValue = analogRead(A0);
  //print out value read
    Serial.println(sensorValue); 
    brightness = map(sensorValue, 0, 1024, 0, 255);
    analogWrite(ledPin, brightness);  
                                              
   delay(1); //short delay for faster response to light.
}
