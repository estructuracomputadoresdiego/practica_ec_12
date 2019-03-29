#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void quitaespacios(char *cadena, char *cadenasin);

void quitaespacios(char *cadena, char *cadenasin){
 
	int j = 0;
	for (int i = 0; i < strlen(cadena); ++i){

		if (cadena[i] != ' ' && cadena[i] != '\n'){
			cadenasin[j] = (char)cadena[i];
			++j;
		}
	}
}

int main(int argc, char const *argv[]){

	int longitud;

	printf("Introduzca la longitud de la cadena\n");
	scanf("%d", &longitud);

	char* cadena;
	cadena = (char*)malloc(sizeof(char)*longitud);

	char* cadenasin;
	cadenasin = (char*)malloc(sizeof(char)*longitud);

	printf("Introduzca una cadena\n");
	fgets(cadena, 100, stdin);
	fgets(cadena, longitud, stdin);

	quitaespacios(cadena, cadenasin);

	printf("%s\n", cadenasin);

	free(cadena);
	free(cadenasin);

	return 0;
}