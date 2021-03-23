#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char* string_concat(char*, char*);
void string_concat_dinamyc(char*,char*, char* (*funcion) (char*,char*));
void mail_split(char*, char**, char**);

int main () {

    char* a ="hola";
    char* b = "uno";

    printf("concatencacion: %s \n",string_concat(a,b));

    string_concat_dinamyc(a,b,&string_concat);

    char* user;
    char* dominio;
    char* mail = "ale@gmail.com";

    mail_split(mail,&user,&dominio);

    printf("user: %s\ndominio: %s\n",user,dominio);

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

void string_concat_dinamyc(char* primero,char* segundo, char* (*funcion) (char*,char*)){
	printf("concatenacion2: %s\n",funcion(primero,segundo));

}

void mail_split(char* mail, char** user, char** dominio){
	int tamanio = strlen(mail);
	int flag = 1;
	char* usuario[4];
	for (int i=0; i< tamanio;i++){
		if (mail[i]!='@' && flag){
			usuario[i] = mail[i];
		} else if(mail[i]=='@') {
			flag=0;

		} else {
//			dominio[i-strlen(user)] = mail[i];
		}
	}
	printf("u:%s \n",usuario);
}



