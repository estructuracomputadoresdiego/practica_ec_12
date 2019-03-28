#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void quitaespacios(char *cadena, char *cadenasin);
void quitaespacios(char *cadena, char *cadenasin){

	for (int i = 0; i < strlen(cadena); ++i){
		int j = 0;
		if (cadena[i] != ' '){
			cadenasin[j] = cadena[i];
			j++;
		}
	}
}

int main(int argc, char const *argv[])
{
	char* cadena;
	cadena = (char*)malloc(sizeof(char)*100);

	char* cadenasin;
	cadenasin = (char*)malloc(sizeof(char)*100);

	printf("Introduzca una cadena\n");
	fgets(cadena, 100, stdin);

	quitaespacios(cadena, cadenasin);

	printf("%s\n", cadenasin);

	return 0;
}