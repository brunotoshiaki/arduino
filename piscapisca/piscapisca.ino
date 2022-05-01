//Programa : Pisca pisca
//Bruno Toshiaki
void setup() {
  //Define a porta do led como saida
  pinMode(11, OUTPUT);

}

void loop() {
  // Acende o led
  acender();

  //Aguarda intervalo de tempo em milissegundos
  aguardar(1000);

  //Apaga o led
  apagar();

  aguardar(1000);

}

void acender() {
  digitalWrite(11, HIGH);
}

void apagar() {
  digitalWrite(11, LOW);
}

void aguardar(unsigned long tempo) {
  delay(tempo);
}
