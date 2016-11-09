# Semáforo

Este proyecto tiene como objetivo verificar el correcto funcionamiento de un circuito sencillo que simula un semáforo que posteriormente será utilizado para hacer otros ejemplos.

## Pasos a Seguir

1.- Desconectar el cable usb de la placa o del ordenador (con el objetivo de evitar cortocircuitos)

2.- Colocar la parte lateral donde aparecen más pines con el prefijo "D" conectada a la placa en la primera columna. Los demás pines quedarán en el aire como en la imagen.

![Imagen]()

3.- Colocar las resistencias, leds y cables según el esquema de circuito que se muestra a continuación:

![Imagen]()

4.- Conectar la placa al ordenador por el cable usb

5.- Abrir el entorno y copiar el siguiente código:

[Semáforo](https://github.com/ysinotelodigo/TallerIoT/blob/master/proyecto%204%20-%20Sema%CC%81foro%20(Nivel%20Ba%CC%81sico)/semaforo/semaforo.ino)

3.-  Pulsar el segundo botón del entorno para compilar y subir el código.

4.- Tras transferir el código podrás ver que los leds se comportan como si fueran las luces de un semáforo. Si pulsas sobre el botón de la consola de monitorización (botón superior derecha en el que aparece una lupa) podrás ver que por consola indica qué led se va a encender.

## Explicación del Código de este Ejemplo

La función Setup se encarga de indicar la velocidad a la que se comunciará la placa con el ordenador e configurar los pines D1, D5 y D8 como pines de salida de señal o voltaje.

La función Loop está dividida en tres fases:
- Fase 1 Luz Verde: Indica que se va a encender el led verde, se enciende el led verde, se espera 3 segundos y se apaga el led.
- Fase 2 Luz Ambar: Indica que se va a encender el led ambar, se enciende el led ambar, se espera 1 segundo y se apaga el led.
- Fase 3 Luz Roja: Indica que se va a encender el led rojo, se enciende el led rojo, se espera 3 segundos y se apaga el led.
