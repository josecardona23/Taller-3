#include <stdlib.h>
#include <stdio.h>
//Prototipo de funcion
void intercambio (int&, int&);
	int n1=5, n2=9;
	
int main(int argc, char** argv) {
	//Mostrando el valor original de cada variable
	printf("El valor original de n1 es: %d", n1);
	printf("\nEl valor original de n2 es: %d", n2);
	//Llamando ala funcion
	intercambio(n1, n2);
	//Mostrando el valor intercambiado de las variables
	printf("\n\nEl nuevo valor de n1 es: %d", n1);
	printf("\nEl nuevo valor de n2 es: %d", n2);
	
	return 0;
}
//Intercambiando los valores de las variables
void intercambio(int&, int&){
	int cambio;
	cambio=n1;
	n1=n2;
	n2=cambio;
}
