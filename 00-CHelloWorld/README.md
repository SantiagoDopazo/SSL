# TP 0
el TP 0 es un simple programa de C que imprime por pantalla la sentencia Hello World usando la funcion **printf**.

## Instalacion

* Forkear el proyecto.

### Requerimientos

* debera tener instalado un compilador de C en este caso se uso el GCC que viene incluido en la GNU Compiler Collection.

## Librerias Usadas

* ```#include <stdio.h>``` libreria estandar de C donde vienen varias funciones incluidas printf.

## Test and Deploy 

* Primero debera compilar el proyecto usando **gcc hello.c -o nombreEjecutable**.
* Luego ejecutara el proceso usando **./nombreEjecutable**.
* Recordar siempre estar en la carpeta donde esta el archivo.

### Funcionalidades extras
  
* Si quisiera crear un archivo de texto donde escriba las salidas por pantalla puede hacerlo con el comando **./nombreEjecutable > nombreArchivo.txt**, en windows probablemente tendra que hacer **./nombreEjecutable.exe > nombreArchivo.txt**.

* Otra forma de compilarlo para usar un estandar como el c11 deberia usar el comando **gcc hello.c -std=gnu11 -o nombreEjecutable**.

