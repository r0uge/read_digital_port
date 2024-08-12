const int pin = 18;  // Selecciono un pin digital, por ejemplo el GPIO18

void setup() {
  // Inicializa la comunicación serie para ver los resultados en el monitor serie
  Serial.begin(115200);
  
  // Configura el pin como entrada
  pinMode(pin, INPUT);
}

void loop() {
  // Lee el estado del pin
  int state = digitalRead(pin);
  
  // Mostrar el estado del pin en el monitor serie
  Serial.print("El estado del pin ");
  Serial.print(pin);
  Serial.print(" es: ");
  if (state == HIGH) {
    Serial.println("ALTO");
  } else {
    Serial.println("BAJO");
  }

  // Esperar un segundo antes de volver a leer el pin
  delay(1000);
}
