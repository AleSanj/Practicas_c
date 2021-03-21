#include <stdio.h>
#include <string.h>

char* string_concat(char*, char*);


int main () {
    char a[] ="hola";
    char b[] = "uno";

//    char* final = string_concat(a,b);
    printf("concatencacion: %s \n",(char*) string_concat(a,b));

	return 0;
}

char* string_concat(char* primero, char* segundo){
    int tamanioPrim = strlen(primero);
    int tamanioSeg = strlen(segundo);


	int tamanio = tamanioPrim + tamanioSeg;
    printf("%d y %d y %d\n",tamanioPrim,tamanioSeg, tamanio);
	char concat[tamanio];


	for(int i=0;i<tamanio;i++){

    if (i < tamanioPrim){
	printf("%c\n",primero[i]);
	concat[i] = primero[i];
	    }else {
	    	printf("%c\n",segundo[i-tamanioPrim]);
	    	concat[i] = segundo[i-tamanioPrim];

	    }

	}


	concat[tamanio] = '\0';

	return concat;


}
