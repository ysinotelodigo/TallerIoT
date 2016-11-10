# Telégrafo

El objetivo de este ejemplo es mostrar cómo se puede conectar la placa a un broker ("servidor") mediante el protocolo MQTT. Para ello se ha desarrollado un ejemplo de un telégrafo en el que dos personas se podrán comunicar mediante un botón y un zumbador.

## Pasos a Seguir

1.- Desconecte el cable usb de la placa o del ordenador (con el objetivo de evitar cortocircuitos)

2.- Coloque la parte lateral donde aparecen más pines con el prefijo "D" conectada a la placa en la primera columna. Los demás pines quedarán en el aire como en la imagen.

![Imagen](https://raw.githubusercontent.com/ysinotelodigo/TallerIoT/master/recursos%20tutoriales/baseInicial.png)

3.- Coloque las resistencias, el zumbador, el botón y cables según el esquema de circuito que se muestra a continuación:

![Imagen](https://raw.githubusercontent.com/ysinotelodigo/TallerIoT/master/recursos%20tutoriales/telegrafo.png)

4.- Conecte la placa al ordenador por el cable usb

5.- Abra el entorno y copiar el siguiente código:

[Semáforo](https://github.com/ysinotelodigo/TallerIoT/blob/master/proyecto%207%20-%20Telegrafo%20(Nivel%20Intermedio)/telegrafo/telegrafo.ino)

6.- Modique el nombre del Emisor y Receptor de los mensajes que se morse. Hable con otro grupo para intercambiaros el Emisor y Receptor. (Línea 33 y 34)

7.-  Pulse el segundo botón del entorno para compilar y subir el código.

8.- Tras transferir el código abra la consola de monitorización y verifique que se conecta a la red.

9.- Una vez conectados ambos se podrá empezar la comunicación por morse

## Explicación del Código de este Ejemplo

TODO
