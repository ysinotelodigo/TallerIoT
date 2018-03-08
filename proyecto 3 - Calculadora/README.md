# Calculadora

El objetivo de este tutorial es mostrar un ejemplo de comunicación bidireccional entre la placa y el ordenador por el cable de serie (cable usb)

## Pasos a Seguir

1.- Conecte la placa al ordenador por el cable usb

2.- Abra el entorno y copiar el siguiente código:

[Calculadora](https://github.com/ysinotelodigo/TallerIoT/blob/master/proyecto%203%20-%20Calculadora%20(Nivel%20Ba%CC%81sico)/calculadora/calculadora.ino)

3.-  Pulse el segundo botón del entorno para compilar y subir el código.

4.- Tras transferir el código abra la consola de monitorización (botón superior derecha en el que aparece una lupa). Cuando lo abra escriba números en el campo y pulse enviar. Podrá ver como va sumando el valor que se envia con todos los anteriores valores enviados.

## Explicación del Código de este Ejemplo

Antes de cualquier método podemos ver una variable global (significa que cualquier función podrá hacer uso de ella) denominada sumaTotal. Esta variable será la encargada de llevar el recuento de las sumas.

La función Setup se encarga de indicar la velocidad a la que se comunciará la placa con el ordenador, dar el valor inicial a la variable sumaTotal el valor de 0 y hacer una pequeña espera para que la comunciación entre el ordenador y la placa se inicie (existen formas más elegante de hacer eso, pero el objetivo es el mínimo número de sentencias nuevas).

La función Loop muestra un mensaje solicitando un número, a continuación se inicia un bucle hará dormir/esperar a la placa hasta que reciba algo por el cable serial. Cuando se reciba un número las siguientes líneas lo guardarán en una varible de tipo numérica (int) y realizará la suma de la cantidad anterior más la nueva. Destacar que si lo que se recibe por serial no es un número la función Serial.parseInt() devolverá 0. Por último se muestra la suma total que lleva la placa.
