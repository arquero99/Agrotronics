# Desarrollo con ESP32
Por suerte, es posible también utilizar el IDE de Arduino para programar las placas ESP32. Pero antes de poder cargar tus códigos al ESP32 es necesario preparar el IDE para esta tarea.
![ESP32](/imgs/esp.png)

## 1. Añadir las URL para permitir compatibilidad con placas ESP
Para programar un ESP32 desde Arduino IDE hay que agregar las URLs de las placas ESP32 para así descargar el núcleo (o core) de ESP32 para Arduino.
Lo primero es ejecutar Arduino IDE y hacer clic en “Archivo>Preferencias”.
![prefs](/imgs/add1.png)
En la ventana de preferencias es necesario hacer clic en el botón “Gestor de tarjetas adicionales”.
![addboard](/imgs/add2.png)

https://dl.espressif.com/dl/package_esp32_index.json: con esta dirección el gestor de placas tendrá acceso a un conjunto elevado de placas y módulos ESP32 de varios fabricantes.

## 2. Instalar core y placa ESP32
Para instalar el soporte para ESP32 y las placas de desarrollo hay que ir a “Herramientas>Placas>Gestor de Tarjetas”.
![core](/imgs/core.png)
Esto abrirá el gestor de placas o tarjetas. En cuanto se inicie, comenzará a actualizar su base de datos, utilizando las URLs que se agregaron anteriormente en preferencias.
![boards](/imgs/boards.png)
Una vez termine, hay que escribir “ esp32 ” en la barra de búsqueda para filtrar las placas disponibles

## 3. Conectar la placa al ordenador
Para conectar tu placa ESP32 al ordenador se utiliza el cable USB. Una vez conectado, el LED de encendido se activará indicando que la placa está correctamente alimentada. En caso de que el LED no se encienda es posible que el cable o el puerto USB estén dañados.

## 4. Seleccionar la placa ESP32 a utilizar
Ahora es necesario indicar al software Arduino IDE la placa a utilizar. Para esto es necesario ir a “Herramientas>Placas” y seleccionar la opción correspondiente.

## 5. Seleccionar el puerto
Aunque en muchas ocasiones el propio IDE determina el puerto empleado por la placa, en otras es necesario especificarlo. Para esto, tienes que ir a “Herramientas>Puerto”, una vez aquí es necesario seleccionar el puerto correspondiente a la placa.

## 6. Cargar programa al ESP32
Ya solo queda cargar el código implementado al ESP32. Para comprobar que el proceso de grabado sea correcto, una buena opción es utilizar el ejemplo Blink, ya que no requieren ningún componente externo.

