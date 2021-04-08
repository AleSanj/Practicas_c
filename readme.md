link de los enunciados:
https://docs.google.com/document/d/1HSO63oQUx8tJH6dlDyjktShKXuEfpGpi3ZnRoPN6SYY/edit

Ejercicio 1 (Básico de C)

Realizar las siguientes funciones (revisar qué funciones de Ansi C nos pueden ayudar):
/* 
*   Retorna un String nuevo que es la concatenación
*   de los dos Strings pasados por parámetro
*   Ejemplo:
*   char* nombre = "Ritchie";
*   char* saludo = string_concat("Hola ", nombre);
*   =>
*   saludo = "Hola Ritchie"
*/
char* string_concat(const char*, const char*);

/*
*   Asigna en el tercer parámetro, la concatenación
*   de los primeros dos Strings
*   Ejemplo:
*   char* nombre = "Ritchie";
*   char* saludo;
*   string_concat("Hola ", nombre, &saludo);
*   =>
*   saludo = "Hola Ritchie"
*/
void string_concat_dinamyc(const char*, const char*, char**);

/*
*   Separa el mail en un usuario y un dominio.
*   Ejemplo:
*   char* mail = "ritchie@ansic.com.ar";
*   char* user;
*   char* dominio;
*   mail_split(mail, &user, &dominio);
*   =>
*   user = "ritchie"
*   dominio = "ansic.com.ar"
*/
void mail_split(const char* mail, char** user, char** dominio);


Ejercicio 2 (Modelado de TADs)

Se pide modelar un TAD que represente un Archivo, se debe poder abrir (definir la forma: read/write/append), cerrar un archivo, leer una linea determinada, exponer una operación que reciba una función y la ejecute por cada línea del archivo; exponer otra operación que dada una lista y una función, itere la lista y escriba sobre el archivo abierto lo que devuelve dicha función (string).

Ejercicio 3 (Uso de Commons-Library)

Dado un archivo de texto que contiene un conjunto de personas, leerlo, procesarlo y generar la salida especificada. Recomendación: Revisar las funciones provistas en la biblioteca commons-library de la cátedra.

Archivo de entrada:
Formato => Región; Nombre y Apellido; Edad; Número Telefónico; DNI; Saldo
Cada renglón representa una persona, cada campo de la persona se encuentra separado por un ‘;’ como delimitador (por lo tanto tienen campos de longitud variable).
El archivo no sigue ningún orden.


Archivo de salida: 
Formato => Región | Edad | DNI | Nombre y Apellido (30 chars máximo) | Número telefónico
Cada renglón representa una persona.
El archivo debe estar ordenado por Región y Edad.
Filtrar los menores de edad (< 18 años).
Loggear las personas cuyo saldo sea menor a 100$. 
