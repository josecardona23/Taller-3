#include <stdio.h>
#include <stdlib.h>
//prototipo de la funcion
void datos();
void mult(float a, float b);

float n1, n2;

int main() {
	datos();
	mult(n1, n2);
	return 0;
}
//Asignando numero a las variables
void datos(){
	printf("Ingrese 2 numeros: ");
	scanf("%f %f", &n1, &n2);
}
//Multiplicando las variables
void mult(float a, float b){
	float resultado = a * b;
	printf("La multiplicacion es %0.0f", resultado);
}
