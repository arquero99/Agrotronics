# AgroTec
Repositorio para curso de tecnologías digitales aplicadas a la producción de cultivos

# Primeros Pasos
Lo primero será instalar la placa Arduino en nuestro ordenador. Así podremos comunicarnos con ella y mandarle programas para que esta los ejecute.
Antes de realizar la conexión tendremos que instalar el IDE para que la conexión se configure correctamente.

## 1. Instalación de entorno de desarrollo
Un entorno de desarrollo (IDE, por sus siglas en inglés) se refiere a un conjunto de herramientas y recursos que permiten a los programadores escribir, depurar y probar software de manera eficiente. En el caso específico de Arduino, el IDE de Arduino es una aplicación diseñada para facilitar la programación y el desarrollo de proyectos utilizando placas y microcontroladores Arduino.
Tras realizar unas pequeñas modificaciones, también podrás usar este IDE para desarrollar programas para microcontroladores ESP.

## 2. Instalar Drivers
Afortunadamente si has instalado el IDE, los drivers se habrán instalado automáticamente y con tan solo conectar el Arduino ya podremos usarlo.
Si algo ha salido mal o estamos usando otra forma de instalación tendremos que:
1. Conectar cable USB desde ordenador a Arduino
2. Abrir Administrador de Dispositivos 
3. Buscar Puertos (COM y LPT). Desplegar
4. Click derecho en placa Arduino Uno
5. Actualizar Controlador
6. Seleccionar "Buscar en mi equipo"
7. Ir a la carpeta de instalación del IDE (C:/Archivos de Programa(x86)/Arduino/drivers) y seleccionar el archivo arduino.inf

## 3. Conexión USB
La comunicación con el Arduino será vía USB, por lo que tenemos que conectar dicho cable del Arduino al puerto USB de nuestro ordenador.
El cable USB también se encargará de alimentar el Arduino.

## 4. Abrir primer programa
Vamos a abrir el primer programa de ejemplo para la placa Arduino.
Para ello, dentro del IDE ir a Archivo > Ejemplos > Basics > Blink.
Apreciar como se abre una nueva pestaña con el programa seleccionado. No hacer mucho caso al código, no es de gran importancia en este momento.
Este programa encenderá y apagará un led incluido en el Arduino cerca del puerto Digital 13.

![UploadButton](/imgs/blink.PNG)

## 5. Seleccionar placa y Puerto
Queremos subir el programa a la placa Arduino.
Para ello tenemos que seleccionar la placa Arduino sobre la que queremos subir el programa. Para ello:
Ir a Herramientas > Placa  y seleccionar Arduino Uno (En caso de que estuviésemos trabajando con otra placa aquí seleccionamos el modelo)
En Herramientas > Puerto seleccionar el puerto asociado a la arduino (COM x)
En ocasiones no podemos saber facilmente que puerto COM está asociado a nuestra Arduino. Un pequeño truco es conectar y desconectar la placa, fijándonos en que puerto COM aparece y desaparece.

![UploadButton](/imgs/placa.PNG)

## 6. Subir primer programa.
Vamos subir el programa a la placa Arduino que hemos seleccionado. Para ello deberemos pulsar sobre el botón "Subir", en la parte superior izquierda del IDE.
Los leds Rx y TX del Arduino se pondrán a parpadear, y tras unos segundos parecerá el mensaje "Done uploading" en la barra de estado inferior del IDE.
El programa empezará a funcionar, y como podrás apreciar, el led cercano al puerto D13 se pondrá a parpadear. Enhorabuena! Acabas de lanzar tu primer programa Arduino.

![UploadButton](/imgs/uploadArd.PNG)

## 7.Primera conexión con sensores. DS18B20
El sensor DS18B20 es un sensor de temperatura digital de alta precisión que se utiliza ampliamente en diferentes aplicaciones, incluida la agricultura. Este sensor utiliza la tecnología de sensor de temperatura de tipo "1-Wire", lo que significa que se puede comunicar con una interfaz digital utilizando solo un cable de datos. Además tiene protección IP68.
En la agricultura, el sensor DS18B20 se utiliza en diversas aplicaciones relacionadas con el monitoreo y control de temperatura. Algunas de las aplicaciones relevantes son:
1. Control de temperatura en invernaderos: El DS18B20 se puede utilizar para monitorear la temperatura dentro de invernaderos y asegurar que se mantengan en rangos óptimos para el crecimiento de las plantas. Esto permite tomar medidas para ajustar la temperatura, como la activación de sistemas de ventilación o calefacción.
2. Monitoreo de temperatura del suelo: Conectar el sensor DS18B20 en diferentes profundidades del suelo permite medir la temperatura del suelo en diferentes capas. Esto es útil para controlar las condiciones de siembra y germinación de las semillas, así como para monitorear el desarrollo de las raíces de las plantas.
3. Monitoreo de temperatura en sistemas de riego: El DS18B20 se puede utilizar para controlar la temperatura del agua utilizada en sistemas de riego, lo que ayuda a garantizar que el agua suministrada a las plantas esté en el rango adecuado y no cause daños.
4. Control climático en sistemas de cultivo hidropónico: En los sistemas de cultivo hidropónico, donde las plantas crecen en soluciones nutritivas en lugar de suelo, el DS18B20 se puede utilizar para controlar y ajustar la temperatura de las soluciones, lo que influye en la salud y el crecimiento de las plantas.
Para manejar este sensor desde una placa Arduino, sigue el siguiente (https://upm365.sharepoint.com/sites/ARDUINOAGRNOMOSUPM/SitePages/Medir-Temperatura-en-un-l%C3%ADquido.aspx]
Habremos de descargar las librerías de dallasTemperature y OneWire
