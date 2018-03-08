# Semáforo Móvil

Este proyecto hace uso del circuito que simula un semáforo (proyecto 4 - semáforo).

El objetivo de este ejemplo es mostrar cómo crear un punto de acceso Wifi con la placa NodeMCU y un mini-servidor de páginas web que proporcionará una página al dispositivo móvil que se conecte para poder manejar las luces del semáforo.

## Pasos a Seguir

1.- Desconecte el cable usb de la placa o del ordenador (con el objetivo de evitar cortocircuitos)

2.- Coloque la parte lateral donde aparecen más pines con el prefijo "D" conectada a la placa en la primera columna. Los demás pines quedarán en el aire como en la imagen.

![Imagen](https://raw.githubusercontent.com/ysinotelodigo/TallerIoT/master/recursos%20tutoriales/baseInicial.png)

3.- Coloque las resistencias, leds y cables según el esquema de circuito que se muestra a continuación:

![Imagen](https://raw.githubusercontent.com/ysinotelodigo/TallerIoT/master/recursos%20tutoriales/semaforo.png)

4.- Conecte la placa al ordenador por el cable usb

5.- Abra el entorno y copiar el siguiente código:

[Semáforo](https://github.com/ysinotelodigo/TallerIoT/blob/master/proyecto%205%20-%20Sema%CC%81foro%20Mo%CC%81vil%20(Nivel%20Intermedio)/semaforoMovil/semaforoMovil.ino)

6.- Modifique el valor que se encuentra entre comillas en la línea 42 por uno inventado que pueda recordar facilmente. Este valor será el nombre del punto de acceso wifi al cual se conectará su móvil.

7.-  Pulse el segundo botón del entorno para compilar y subir el código.

8.- Tras transferir el código busque en su dispositivo móvil una red wifi a la que conectarse. Seleccionela y vaya al navegador de su móvil e introduzca la siguiente dirección:

http://192.168.4.1/

9.- Pulse las luces del semáforo que le aparece en su pantalla móvil y verá como se encienden los leds de su circuito.

## Explicación del Código de este Ejemplo

TODO
