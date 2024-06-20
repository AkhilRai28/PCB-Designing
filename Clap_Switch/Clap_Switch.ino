
const int micPin = A0; // Microphone input pin
const int relayPin = 7; // Relay output pin
int soundLevel;

void setup() {
  pinMode(relayPin, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  soundLevel = analogRead(micPin);
  Serial.println(soundLevel);

  if (soundLevel > 512) {
    digitalWrite(relayPin, HIGH);
  } else {
    digitalWrite(relayPin, LOW);
  }

  delay(100);
}
