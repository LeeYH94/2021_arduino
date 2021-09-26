#define PIN_LED 7
unsigned int count, toggle;

void setup() {
  pinMode(PIN_LED, OUTPUT);
  Serial.begin(115200);
  while (!Serial) {
    ;
  }

  digitalWrite(PIN_LED, 0);
  delay(1000);
  
  count = toggle = 0;
  while(count < 5){
    toggle = !toggle;
    digitalWrite(PIN_LED, toggle);
    if(toggle == 0){
      count++;    
    }
    delay(100);
  }

  digitalWrite(PIN_LED, 1);
  
}

void loop() {
}
