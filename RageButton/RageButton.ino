
int fsrPin = 0; // the FSR and 10K pulldown are connected to a0
int fsrReading; // the analog reading from the FSR resistor divider

int led = 2;
bool ledON = false;

void setup(void) {
// We'll send debugging information via the Serial monitor

pinMode(led, OUTPUT);

Serial.begin(9600); 
}

void loop(void) {
fsrReading = analogRead(0); 

Serial.print("Analog reading = ");
Serial.print(fsrReading); // the raw analog reading

// We'll have a few threshholds, qualitatively determined
if (fsrReading < 10) {
Serial.println(" - No pressure");
} else if (fsrReading < 200) {
Serial.println(" - Light touch");
} else if (fsrReading < 500) {
Serial.println(" - Light squeeze");
} else if (fsrReading < 800) {
Serial.println(" - Medium squeeze");
} else {
Serial.println(" - Big squeeze");
}
delay(1000);

if (fsrReading > 50 and ledON == false)
{
  digitalWrite(led, HIGH);
  ledON = true;
  Serial.println("led is on");
}

if (fsrReading > 50 and ledON == true)
{
  digitalWrite(led, LOW);
  ledON = false;
  Serial.println("led is off");
}
} 





