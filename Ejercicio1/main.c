#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char* string_concat(char*, char*);
void string_concat_dinamyc(char*, char*, char**);


int main () {

    char* a ="hola";
    char* b = "uno";

    printf("concatencacion: %s \n",string_concat(a,b));
	printf("asdad1\n");
    string_concat_dinamyc(a,b,&string_concat); // despues de esta linea de codigo no se ejecuta el printf
    printf("asdad2\n");
	return 0;
}

char* string_concat(char* primero, char* segundo){
    int tamanioPrim = strlen(primero);
    int tamanioSeg = strlen(segundo);


	int tamanio = tamanioPrim + tamanioSeg;
	char* concat = malloc(tamanio*sizeof(char));


	for(int i=0;i<tamanio;i++){

    if (i < tamanioPrim){
	concat[i] = primero[i];

    }else {
	    	concat[i] = segundo[i-tamanioPrim];
	    }

	}
	concat[tamanio] = '\0';

	return concat;

}

void string_concat_dinamyc(char* primero,char* segundo, char** funcion ){
	char (*aux) (char*,char*) = &funcion;
	printf("concatenacion2: %s",aux(primero,segundo));
	printf("asdad");

}

