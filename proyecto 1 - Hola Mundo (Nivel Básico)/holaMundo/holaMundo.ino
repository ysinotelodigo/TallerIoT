
void setup() {
  // Este método se ejecuta una sola vez (Se ejecuta el primero de todos)
  
  // La siguiente línea indica que la placa se comunicará a una velocidad de 9600 bits por segundo*
  Serial.begin(9600);
}

void loop() {
  // Este método se ejecutará de manera infinita
  
  // La siguiente línea enviar un mensaje desde la placa al ordenador
  Serial.println("¡Hola! Soy la placa NodeMCU y te estoy escribiendo por el cable usb :-)");
  
  // La siguiente línea indica cuantos milisegundos esperará o dormirá la placa (1000 milisegundos = 1 segundo)
  delay(3000);
}


/* * En Internet en algunos tutoriales sobre Arduino y otras placas puede encontrase el término "bits por segundos" 
 *  intercambiado por baudios. En este caso concreto son equivalente dado que en cada estado de la señal se envia
 *  un único bit pero no tiene porque ser así en todos los casos por lo tanto "bits por segundos" y baudios no
 *  siempre son equivalentes.
 */


