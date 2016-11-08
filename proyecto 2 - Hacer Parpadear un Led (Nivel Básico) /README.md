# Hacer Parpadear un led

El objetivo de este ejemplo es permitir un primer contacto con la placa NodeMCU, la protoboard y algunos componentes electrónicos.

## Pasos a Seguir

1.- Desconectar el cable usb de la placa o del ordenador (con el objetivo de evitar cortocircuitos)

2.- Colocar la parte lateral donde aparecen más pines con el prefijo "D" conectada a la placa en la primera columna. Los demás pines quedarán en el aire como en la imagen.

![Imagen]()

3.- Colocar una resistencia de 220 Ohmios (cualquiera del kit) que haga de puente en la fila donde se encuentre el pin D5 como en la imagen.

![Imagen]()

4.- Seleccionar cualquier led del kit y conectarlo de la siguiente forma. El pin que es más largo (ánodo (+)) deberá ir conectado en la otra fila donde salte la resistencia y el pin más corto (cátodo (-)) en la fila superior o inferior. Por último conectar un cable con la fila seleccionada donde esté el pin más corto del led con cualquier fila que ponga la letra G de Ground (Tierra). El esquema debe quedar parecido a la imagen.

![Imagen]()

5.- Conectar la placa al ordenador por el cable usb

6.- Abrir el entorno y copiar el siguiente código:

[Hacer parpadear un led](https://github.com/ysinotelodigo/TallerIoT/blob/master/proyecto%202%20-%20Hacer%20Parpadear%20un%20Led%20(Nivel%20Ba%CC%81sico)%20/parpadearLed/parpadearLed.ino)

7.-  Pulsar el segundo botón del entorno para compilar y subir el código.

8.- Tras transferir el código podrás ver cómo parpadea el led cada dos segundos

## Explicación del Código de este Ejemplo

La función Setup se encarga de indicar la velocidad a la que se comunicará la placa con el ordenador y configurar el pin D5 como pin de salida de señal.

En la función loop se encarga de escribir un mensaje indicando qué va a hacer con el led, dar la orden de encender el led y esperar 2000 milisegundos (2 segundos). En la segunda parte de la función se indica que se va a apagar el led, se da la orden de no dar voltaje al pin y se espera 2000 milisegunso (2 segundos).
