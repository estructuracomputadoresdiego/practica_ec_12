//DUDA:
// Al poner un if(cadenaOrigen[i] != '\n') dentro del for para filtrar el \n no recive nada la cadenaDestino

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void invierte(char *cadenaOrigen, char *cadenaDestino);

void invierte(char *cadenaOrigen, char *cadenaDestino){
 
	int j = strlen(cadenaOrigen);
	for (int i = 0; i < strlen(cadenaOrigen) ; i++){
			*(cadenaDestino+(j-1)) = *(cadenaOrigen+i);
			j--;
	}
}

int main(int argc, char const *argv[])
{
	char* cadenaOrigen;
	cadenaOrigen = (char*)malloc(sizeof(char)*100);

	char* cadenaDestino;
	cadenaDestino = (char*)malloc(sizeof(char)*100);

	printf("Introduzca una cadena\n");
	fgets(cadenaOrigen, 100, stdin);
	printf("Cadena dada: \n%s\n", cadenaOrigen);

	invierte(cadenaOrigen, cadenaDestino);

	printf("Cadena inversa:\n");
	printf("%s\n", cadenaDestino);

	free(cadenaDestino);
	free(cadenaOrigen);

	return 0;
}