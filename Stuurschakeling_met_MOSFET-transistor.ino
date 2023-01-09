const int LICHT_METER = A1;
const int POTENTIO_METER = A2;
const int LED_ROOD = 4;

double lichtmeting;
double schakeldrempel;

void setup() {
  pinMode(LED_ROOD,OUTPUT);
  Serial.begin(9600);
}

void loop() {
  lichtmeting = analogRead(LICHT_METER);
  schakeldrempel = analogRead(POTENTIO_METER);

  Serial.print(lichtmeting);
  Serial.print("\t");
  Serial.println(schakeldrempel);
  
  if (lichtmeting > schakeldrempel)
    digitalWrite(LED_ROOD,HIGH);
    
  else
    digitalWrite(LED_ROOD,LOW);
}
