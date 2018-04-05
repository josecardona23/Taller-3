#include <stdio.h>
#include <stdlib.h>
//prototipo de funcion
int vocales (char *);

int main(int argc, char *argv[]) {
	char nombre[30];
	printf("Ingrese su nombre: ");
	fgets(nombre, 30, stdin);
	//Imprimiendo el numero de vocales encontradas en el nombre
	printf("El numero de vocales en el nombre es de: %i", vocales(nombre)); //Llamando a la funcion
	return 0;
}
//Determinando la cantidad de vocales de un nombre
int vocales(char *c){
	int contador=0;
	
	while(*c){
		switch (*c){
			case 'a':
			case 'e':
			case 'i':
			case 'o':
			case 'u':
				contador++;
		}
		c++;
	}
	return contador;
}
