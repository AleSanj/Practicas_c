#include <stdio.h>
#include<string.h>

char* string_concat(char*, char*);


int main () {
    char* a ="hola";
    char* b = "uno";

    printf("concatencacion: %s \n",string_concat(a,b));

	return 0;
}

char* string_concat(char* primero, char* segundo){
    int tamanioPrim = strlen(primero);
    int tamanioSeg = strlen(segundo);

	int tamanio = tamanioPrim + tamanioSeg;
	char* concat[tamanio+1];

	int j = 0;
	for(int i=0;i<tamanio;i++){
		if(i < tamanioPrim){
 		concat[i] = primero[i];
		} else {

			concat[i] = segundo[j];
			j++;
		}
	}

	concat[tamanio+1] = '\0';






}
