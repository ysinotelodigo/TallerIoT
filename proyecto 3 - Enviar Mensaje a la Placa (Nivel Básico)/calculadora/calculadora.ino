
// Esta variable almacenará la cantidad que lleva sumada
int sumaTotal;

void setup() {
  // Este método se ejecuta una sola vez (Se ejecuta el primero de todos)
  
  // La siguiente línea indica que la placa se comunicará a una velocidad de 9600 bits por segundo*
  Serial.begin(9600);

  // A la variable sumaTotal se le dará inicialmente el valor 0
  sumaTotal =0;

  // La siguiente línea indica cuantos milisegundos esperará o dormirá la placa (1000 milisegundos = 1 segundo)
  // Su objetivo es esperar a que esté conectada la placa y el ordenador 
  delay(2000);
  // La siguiente línea escribe una línea en blanco
  Serial.println("");
}

void loop() {
  // Este método se ejecutará como un bucle de manera infinita

  // La siguiente línea enviar un mensaje desde la placa al ordenador
  Serial.println("Escribe un número para ir sumandolo:");

  // El siguiente conjunto de líneas revisa si hay caracteres disponibles para leer la placa
  // desde el ordenador
  while(Serial.available() == false){
    delay(100);
  }
  // Lee el número que se ha recibido por el usb (si es texto se devuelve un 0)
  int sumando = Serial.parseInt();
  // Hace la suma de lo que llevaba y el nuevo valor y lo guarda en la suma total.
  sumaTotal = sumaTotal + sumando;

  // La siguiente línea enviar un mensaje desde la placa al ordenador
  // Hay que destacar que pone print en vez de println (el "ln" significa nueva línea al final del todo)
  Serial.print("Suma Total: ");
  // La siguiente línea el valor que tiene sumaTotal
  Serial.println(sumaTotal);
}


/* * En Internet en algunos tutoriales sobre Arduino y otras placas puede encontrase el término "bits por segundos" 
 *  intercambiado por baudios. En este caso concreto son equivalente dado que en cada estado de la señal se envia
 *  un único bit pero no tiene porque ser así en todos los casos por lo tanto "bits por segundos" y baudios no
 *  siempre son equivalentes.
 */


