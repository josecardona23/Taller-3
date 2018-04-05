#include <stdio.h>
#include <stdlib.h>
//Prototipo de funcnion
void datos();
float fraccion(float a);

float n;

int main() {
	//Llamando a la funcion
	datos();
	printf("La parte fraccionaria del numero ingresado es: %0.3f", fraccion(n));
	return 0;
}
//Llenando la variable
void datos(){
	printf("Ingrese un valor: ");
	scanf("%f", &n);
}
//Sacando la parte entera de la fraccion
float fraccion(float a){
	int entero = a;
	float resultado= a - entero;

return resultado;
}
