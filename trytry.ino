
const int ledPin =  13;
const int inputPin = 2;
void setup() {
  // put your setup code here, to run once:
pinMode(ledPin, OUTPUT);
pinMode(inputPin, INPUT_PULLUP);
attachInterrupt(0, buttonPressed, FALLING);
Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:

}
void buttonPressed() {
Serial.println("Intrrupt Occured");
if (digitalRead(ledPin))
digitalWrite(ledPin, LOW);
else
digitalWrite(ledPin, HIGH);
}
