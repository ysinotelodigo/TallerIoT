# Configuración del Entorno de Desarrollo

En esta sección del reposititorio se explica los pasos que se han de seguir para la configuración del entorno de desarrollo. Un entorno de desarrollo (IDE) es un conjunto de programas que facilitan la tarea de programar y depurar el código que se implementa. En nuestro caso, utilizaremos el entorno de desarrollo de Arduino.

## Instalaciones Previas

Antes de proceder a la instalación es conveniente tener instalar los driver de la placa para su reconocimiento por parte del sistema operativo. Los drivers no tiene el nombre de chip principal de la placa ESP8266, sino el chip que permite la conmunicación de este chip con el ordenador por USB que es CH340. En los siguientes enlaces es posible descargase los drivers para los principales sistemas operativos:

- Windows: [Driver](https://github.com/ysinotelodigo/TallerIoT/raw/master/proyecto%200%20-%20Configuracio%CC%81n/CH340_Windows.zip)
- Mac OS X (El Capitán y versiones anteriores): [Driver](https://github.com/ysinotelodigo/TallerIoT/raw/master/proyecto%200%20-%20Configuracio%CC%81n/CH340_MAC%20(Mac%20Capitan%20o%20anterior).zip)
- Mac OS X (Sierra) : [Driver](https://github.com/ysinotelodigo/TallerIoT/raw/master/proyecto%200%20-%20Configuracio%CC%81n/CH34x_Install_V1.3%20(Mac%20OS%20Sierra).pkg)
- Linux (Ubuntu, Debian,..): [Driver](https://github.com/ysinotelodigo/TallerIoT/raw/master/proyecto%200%20-%20Configuracio%CC%81n/CH340_Linux.zip)

## Descarga del Entorno de Desarrollo

Como se ha comentado anteriormente se utilizará el entorno de desarrollo de Arduino al cual se le instalará una serie de "plugins" que permitirá el desarrollo de las placas basadas en el chip ESP8266. Dicho entorno se puede descargar desde la siguiente página web:

https://www.arduino.cc/

En la sección "Download" podremos encontrar las diferentes versiones para cada sistema operativo.

![Sección Download](https://raw.githubusercontent.com/ysinotelodigo/TallerIoT/master/recursos%20tutoriales/descargas.png)

Windows aparecen 3 versiones:
 - Windows Installer: Descarga un instalador que instala el programa como un programa más.
 - Windows ZIP file for non admin install: Descarga un fichero comprimido que se puede extraer y utilizarlo (no es necesario instalar nada, útil cuando no somos administradores del sistema).
 - Windows app: Instala el entorno desde el store de Windows.

Mac OS X hay una única versión:
 - Mac OS X 10.7 Lion or newer: Se instala como cualquier otro programa en Mac OS S.

Linux aparecen 3 versiones:
 - Linux 32 bits: Instalador para versiones de 32 bits.
 - Linux 64 bits: Instalador para versiones de 64 bits.
 - Linux ARM (experimental): Instalador para versiones de linux en placas ARM como la Raspberry Pi.

## Inclusión del Repositorio para la instalación del chip ESP8266

Una vez abierto el entorno deberemos de navegar en el menu superior izquierda a:

- Windows: Archivo -> Preferencias...
- Mac OS X: Arduino -> Preferences...

No aparecerá la siguiente ventana en la que deberemos de incluir la siguiente URI en el campo "Gestor de URLs Adicionales de Tarjetas:"

http://arduino.esp8266.com/package_esp8266com_index.json

![Preferencias](https://raw.githubusercontent.com/ysinotelodigo/TallerIoT/master/recursos%20tutoriales/preferencias.png)

Esto permitirá al entorno el acceso de un repositorio con librerias y configuraciones de las placas que hacen uso del chip ESP8266.

## Instalación del plugin para el Chip ESP8266

Una vez indicado el repositorio deberemos de navegar de nuevo el menu superior derecha a:

- Cualquier Sistema operativo: Herramientas -> Placa: "..." -> Gestor de Tarjetas...

Nos aparecerá una ventana como la siguiente:

![Gestor de Placas](https://raw.githubusercontent.com/ysinotelodigo/TallerIoT/master/recursos%20tutoriales/gestorPlacas.png)

En ella deberemos de pulsar en el campo superior derecha del buscador y escribir:

ESP8266

Nos aparecerá un único resultado que deberemos de instalar.

## Último Paso de la Configuración

Una vez instalado el plugin para la placas basadas en el chip ESP8266, deberemos de indicar al entorno que hacemos uso de esta placa. Con la placa NodeMCU conectada por usb en el ordenador deberemos de ir al menu superior izquierda y hacer seleccionar las siguiente configuraciones:

- Cualquier Sistema operativo: Herramientas -> Placa: "..." -> NodeMCU v1.0 (ESP-12E)

- Windows: Herramientas -> Puerto -> COM X (Donde X es un valor entero (si hay varias opciones se puede conocer cuál es conectado y desconectado la placa))
- Mac: Herramientas -> Puerto -> /dev/cu.wusbserie
- Linux: Herramientas -> Puerto -> /dev/tty.XXXX (Donde X es un nombre o valor dado por los drivers (si hay varias opciones se puede conocer cuál es conectado y desconectado la placa)

### ¡Con esto ya habremos terminado de congurar el entorno!
