#include <stdio.h>
#include <stdlib.h>
//Prototipo de funcion
void datos ();
void al_cuadrado(float n);

float n;

int main() {
	//Llamando a la funcion;
	datos();
	al_cuadrado(n);
	
	return 0;
}
//Llenando la variable
void datos(){
	printf("Ingrese un numero: ");
	scanf("%f", &n);
}
//Elevando la variable al cuadrado
void al_cuadrado(float n){
	float cuadrado = 0;
	cuadrado = n*n;
	printf("El cuadrado del numero ingresado es: %f", cuadrado);
	
}
