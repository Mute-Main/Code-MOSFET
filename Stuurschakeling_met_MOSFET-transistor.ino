const int LichtMeter = A1;
const int PotentioMeter = A2;
const int LED_rood = 4;

double lichtmeting;
double schakeldrempel;


void setup() {
pinMode(LED_rood,OUTPUT);
Serial.begin(9600);
}

void loop() {
  
  lichtmeting = analogRead(LichtMeter);
  schakeldrempel = analogRead(PotentioMeter);
  Serial.print(lichtmeting);
  Serial.print("       ");
  Serial.println(schakeldrempel);
  
  if (lichtmeting > schakeldrempel)
    digitalWrite(LED_rood,HIGH);
    
  else
    digitalWrite(LED_rood,LOW);
}
