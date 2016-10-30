void setup() {
  // Pon aquí tu código que será ejecutado solo una vez:

  // Inicia la comunicación entre la placa y el ordenador
  Serial.begin(9600);
  // Indica que el pin D1 será de salida (Led rojo)
  pinMode(D1,OUTPUT);
  // Indica que el pin D5 será de salida (Led ambar)
  pinMode(D5,OUTPUT);
  // Indica que el pin D8 será de salida (Led verde)
  pinMode(D8,OUTPUT);
}

void loop() {
  // Pon aquí tu código principal, para que repita constantemente:

  // Envia un mensaje al ordenador indicando qué va a hacer
  Serial.println("Se enciende la luz verde");
  // Indica que se envie la señal de voltaje alta de 3.3 voltios en el pin D8
  digitalWrite(D8,HIGH);
  // Indica que se espere 3000 milisegundos = 3 segundos
  delay(3000);
  // Indica que se envie la señal de voltaje baja de 0 voltios en el pin D8
  digitalWrite(D8,LOW);

  // Envia un mensaje al ordenador indicando qué va a hacer
  Serial.println("Se enciende la luz ambar");
  // Indica que se envie la señal de voltaje alta de 3.3 voltios en el pin D5
  digitalWrite(D5,HIGH);
  // Indica que se espere 1000 milisegundos = 1 segundo
  delay(1000);
  // Indica que se envie la señal de voltaje baja de 0 voltios en el pin D8
  digitalWrite(D5,LOW);

  // Envia un mensaje al ordenador indicando qué va a hacer
  Serial.println("Se enciende la luz rojo");
  // Indica que se envie la señal de voltaje alta de 3.3 voltios en el pin D1
  digitalWrite(D1,HIGH);
  // Indica que se espere 3000 milisegundos = 3 segundos
  delay(3000);
  // Indica que se envie la señal de voltaje baja de 0 voltios en el pin D8
  digitalWrite(D1,LOW);
}
