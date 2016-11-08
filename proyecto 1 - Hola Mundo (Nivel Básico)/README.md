# Hola Mundo

En este primer proyecto se explicarán los primeros pasos que se han de seguir para lograr compilar, subir el código a la placa, ejecutar y depurar nuestro primer código.

- Compilar: Acción de transformar el código o código fuente ("entendible" por el ser humano) a código máquina que un ordenador o microcontrolador es capaz de entender.
- Subir el código a la placa: Acción que el ordenador realiza de transferir este código que es entendible por la placa a la memoria del microcontrolador.
- Ejeucutar: Acción que realiza la placa cuando ejecuta el código máquina alojado en su memoria.
- Depurar: Acción de analizar qué está haciendo el código. Útil para conocer si nuestro código fuciona correctamente

## Pasos a Seguir

1.- Abrir el entorno Arduino IDE.

2.- Conectar la placa NodeMCU y configurar el entorno si no se ha hecho anteriormente.

3.- Copiar en el editor de texto el siguiente código:

[Hola Mundo](https://github.com/ysinotelodigo/TallerIoT/blob/master/proyecto%201%20-%20Hola%20Mundo%20(Nivel%20Ba%CC%81sico)/holaMundo/holaMundo.ino)

4.- Pulsar sobre el segundo botón (el que parece una fecha hacia la derecha) de la parte superior derecha.

5.- Esperar a que el entorno transfiera el código a la placa
Podrás observar una barra de progreso en la consola inferior que hay en la ventana del entorno y un led que está parpadeando en la NodeMCU.

6.- Pulsar el botón que se encuentra en la parte superior derecha (el que aparece una lupa).

7.- Podrás observar cómo la placa NodeMCU se está comunicando con el ordenador por el cable USB.

![Consola Hola Mundo](https://raw.githubusercontent.com/ysinotelodigo/TallerIoT/master/recursos%20tutoriales/holaMundo.png)

## Explicación General del Código

La lógica de todos sketches o programas se divide en dos grandes partes (como todos los sketches para Arduino).
- Función Setup: Se ejecuta el primero y una única vez
- Función Loop: Se ejecuta de manera infinita en forma de bucle después de Setup

## Explicación del Código de este Ejemplo

En la función Setup aparece una única línea que configura la velocidad a la que se van a comunicar la placa y el ordenador. Puede ser cambiada a cualquier valor válido (300, 1200, 2400, 4800, 9600, 19200, 38400, 57600, 74880, 115200, 230400, 250000). Si se desea cambiarlo habría que indicar en la consola de monitorización la misma velocidad para que se haga correctamente.

En la función Loop aparecen dos líneas. La primera escribe por el cable serial (el cable usb) el mensaje que aparece. La segunda línea indica a la placa que debe de esperar 3000 milisegundos que es igual a 3 segundos. Tras terminar de ejecutar esta línea de código se vuelve e ejecutar de nuevo la primera línea por eso aparece cada tres segundos un mensaje por consola.
