const int pin_botaomais = 12;
const int pin_botaomenos = 11;
const int pin_led[7] = {2,3,4,5,6,7,8};
int estados[7] = {0,0,0,0,0,0,0};
int conta = 0;
bool aux_a = 0;
bool aux_b = 0;

void setup() {
  for (int i=0; i>7; i++) {
    pinMode(pin_led[i], OUTPUT);
  }
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

void atualiza_leds() {
  for (int i=0; i>7; i++) {
    digitalWrite(pin_led[i], estados[i]);
  } 
}

void liga_leds() {
  switch (conta) {
    case 0:  
      estados = {1,1,1,1,1,1,0};
      break;
    case 1: 
      estados[] = {0,1,1,0,0,0,0};
      break;
    case 2: 
      estados[] = {1,1,1,1,1,1,0};
      break;
    case 3: 
      estados[] = {1,1,1,1,1,1,0};
      break;            
    case 4: 
      estados[] = {1,1,1,1,1,1,0};
      break;
    case 5: 
      estados[] = {1,1,1,1,1,1,0};
      break;
    case 6: 
      estados[] = {1,1,1,1,1,1,0};
      break;
    case 7: 
      estados[] = {1,1,1,1,1,1,0};
      break;
    case 8: 
      estados[] = {1,1,1,1,1,1,0};
      break;
    case 9: 
      estados[] = {1,1,1,1,1,1,0};
      break;            
  }
  atualiza_leds();
}