
void setup() {
  // Este método se ejecuta una sola vez (Se ejecuta el primero de todos)
  
  // La siguiente línea indica que la placa se comunicará a una velocidad de 9600 bits por segundo*
  Serial.begin(9600);
  // La siguiente línea indica que el pin D5 será de salida (devolverá 0v cuando la señal sea baja y 3.3V cuando la señal sea alta)
  pinMode(D5,OUTPUT);
}

void loop() {
  // Este método se ejecutará en bucle de manera infinita
  
  // La siguiente línea enviar un mensaje desde la placa al ordenador
  Serial.println("Enciendo el Led");
  // Indica que se devuelva el nivel alto (3.3v) por el pin D5
  digitalWrite(D5,HIGH);
  // La siguiente línea indica cuantos milisegundos esperará o dormirá la placa (1000 milisegundos = 1 segundo)
  delay(2000);

  // La siguiente línea enviar un mensaje desde la placa al ordenador
  Serial.println("Apaga  el Led");
  // Indica que se devuelva el nivel bajo (0v) por el pin D5
  digitalWrite(D5,LOW);
  // La siguiente línea indica cuantos milisegundos esperará o dormirá la placa (1000 milisegundos = 1 segundo)
  delay(2000);
  
}


/* * En Internet en algunos tutoriales sobre Arduino y otras placas puede encontrase el término "bits por segundos" 
 *  intercambiado por baudios. En este caso concreto son equivalente dado que en cada estado de la señal se envia
 *  un único bit pero no tiene porque ser así en todos los casos por lo tanto "bits por segundos" y baudios no
 *  siempre son equivalentes.
 */


