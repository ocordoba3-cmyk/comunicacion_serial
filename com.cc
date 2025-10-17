int contador = 0;

void setup() {
  Serial.begin(115200);
  Serial.println("Hello, ESP32-S2!");
}

void loop() {
  contador++;
  Serial.print("Ciclo número: ");
  Serial.println(contador);
  delay(1000); // Espera 1 segundo entre ciclos
}
