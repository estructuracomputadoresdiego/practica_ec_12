#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main(int argc, char const *argv[])
{
	int longitud;
	char* cadena;
	cadena=(char*)malloc(sizeof(char)*100);

	printf("Introduzca una cadena:\n");
	fgets(cadena, 100, stdin);
	longitud = strlen(cadena)-1;

	printf("La longitud de la cadena es %d\n", longitud);

	printf("La cadena dada es \"");
	int i = 0;
	while (cadena[i] != '\n'){
		printf("%c", cadena[i]);
		i++;
	}
	printf("\" \n");

	if (strcmp("compara\n", cadena) == 0){
		printf("La cadena dada es igual a \"compara\"\n");
	}else{
		printf("La cadena dada no es igual a \"compara\"\n");
	}

	strcat(cadena, "añadida");

	for (int i = 0; i < strlen(cadena); ++i){
		if (cadena[i] != '\n'){
			printf("%c", cadena[i]);
		}else{
			printf(" ");
		}
	}

	printf("\n");

	return 0;
}