const int pin_botaomais = 12;
const int pin_botaomenos = 11;
const int pin_a = 2;
const int pin_b = 3;
const int pin_c = 4;
const int pin_d = 5;
const int pin_e = 6;
const int pin_f = 7;
const int pin_g = 8;
int conta = 0;
bool aux_a = 0;
bool aux_b = 0;

void setup() {
  pinMode(pin_a, OUTPUT);
  pinMode(pin_b, OUTPUT);
  pinMode(pin_c, OUTPUT);
  pinMode(pin_d, OUTPUT);
  pinMode(pin_e, OUTPUT);
  pinMode(pin_f, OUTPUT);
  pinMode(pin_g, OUTPUT);
  pinMode(pin_botaomais, INPUT_PULLUP);
  pinMode(pin_botaomenos, INPUT_PULLUP);
}

void loop() {
  lerbotoes();
  liga_leds();
}

void lerbotoes() {
  bool a = digitalRead(pin_botaomais);
  bool b = digitalRead(pin_botaomenos);
  if (a == 0) {
    if (aux_a == 0) {
      conta++;
      aux_a = 1;
    }
  }
  else {
    aux_a = 0;
  }
  if (b == 0) {
    if (aux_b == 0) {
      conta--;
      aux_b = 1;
    }
  }
  else {
    aux_b = 0;
  }
  if (conta > 9) {
    conta = 9;
  }
  if (conta < 0) {
    conta = 0;
  }
}

void liga_leds() {
  switch (conta) {
    case 0:  
      digitalWrite(pin_a, HIGH);
      digitalWrite(pin_b, HIGH);
      digitalWrite(pin_c, HIGH);
      digitalWrite(pin_d, HIGH);
      digitalWrite(pin_e, HIGH);
      digitalWrite(pin_f, HIGH);
      digitalWrite(pin_g, LOW);
      break;
    
    case 1: 
      digitalWrite(pin_a, LOW);
      digitalWrite(pin_b, HIGH);
      digitalWrite(pin_c, HIGH);
      digitalWrite(pin_d, LOW);
      digitalWrite(pin_e, LOW);
      digitalWrite(pin_f, LOW);
      digitalWrite(pin_g, LOW);
      break;
    case 2: 
      digitalWrite(pin_a, HIGH);
      digitalWrite(pin_b, HIGH);
      digitalWrite(pin_c, HIGH);
      digitalWrite(pin_d, HIGH);
      digitalWrite(pin_e, HIGH);
      digitalWrite(pin_f, HIGH);
      digitalWrite(pin_g, LOW);
      break;
    case 3: 
      digitalWrite(pin_a, HIGH);
      digitalWrite(pin_b, HIGH);
      digitalWrite(pin_c, HIGH);
      digitalWrite(pin_d, HIGH);
      digitalWrite(pin_e, HIGH);
      digitalWrite(pin_f, HIGH);
      digitalWrite(pin_g, LOW);
      break;            
    case 4: 
      digitalWrite(pin_a, HIGH);
      digitalWrite(pin_b, HIGH);
      digitalWrite(pin_c, HIGH);
      digitalWrite(pin_d, HIGH);
      digitalWrite(pin_e, HIGH);
      digitalWrite(pin_f, HIGH);
      digitalWrite(pin_g, LOW);
      break;
    case 5: 
      digitalWrite(pin_a, HIGH);
      digitalWrite(pin_b, HIGH);
      digitalWrite(pin_c, HIGH);
      digitalWrite(pin_d, HIGH);
      digitalWrite(pin_e, HIGH);
      digitalWrite(pin_f, HIGH);
      digitalWrite(pin_g, LOW);
      break;
    case 6: 
      digitalWrite(pin_a, HIGH);
      digitalWrite(pin_b, HIGH);
      digitalWrite(pin_c, HIGH);
      digitalWrite(pin_d, HIGH);
      digitalWrite(pin_e, HIGH);
      digitalWrite(pin_f, HIGH);
      digitalWrite(pin_g, LOW);
      break;
    case 7: 
      digitalWrite(pin_a, HIGH);
      digitalWrite(pin_b, HIGH);
      digitalWrite(pin_c, HIGH);
      digitalWrite(pin_d, HIGH);
      digitalWrite(pin_e, HIGH);
      digitalWrite(pin_f, HIGH);
      digitalWrite(pin_g, LOW);
      break;
    case 8: 
      digitalWrite(pin_a, HIGH);
      digitalWrite(pin_b, HIGH);
      digitalWrite(pin_c, HIGH);
      digitalWrite(pin_d, HIGH);
      digitalWrite(pin_e, HIGH);
      digitalWrite(pin_f, HIGH);
      digitalWrite(pin_g, LOW);
      break;
    case 9: 
      digitalWrite(pin_a, HIGH);
      digitalWrite(pin_b, HIGH);
      digitalWrite(pin_c, HIGH);
      digitalWrite(pin_d, HIGH);
      digitalWrite(pin_e, HIGH);
      digitalWrite(pin_f, HIGH);
      digitalWrite(pin_g, LOW);
      break;            
  }
}