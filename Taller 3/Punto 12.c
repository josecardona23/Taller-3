#include <stdio.h>
#include <stdlib.h>
//Prototipo de la funcion
void llenarVector();
void cambiarSigno(int vector[], int tam);
void mostrarVector(int vector[], int tam);

int tam, vector[50];

int main(int argc, char *argv[]) {
	//Llamando a la funcion
	llenarVector();
	cambiarSigno(vector, tam);
	mostrarVector(vector, tam);
	
	return 0;
}
//Llenando el vector
void llenarVector(){ 
	int i;
	printf("Ingrese la cantidad de elementos del vector: ");
	scanf("%d", &tam);
	
	for(i=0; i<tam; i++){
		printf("Ingrese un numero: ");
		scanf("%d", &vector[i]);
	}
}
//Cambiando el signo de los elementos del vector
void cambiarSigno(int vector[], int tam){
	int i;
	for(i=0; i<tam; i++){
		vector[i]  *= -1;
	}
	
}

void mostrarVector(int vector[], int tam){
	int i;
	printf("\nMostrando los elementos del vector con su signo cambiado:\n");
	for( i=0; i<tam; i++){
		printf("\n%d", vector[i]);
	}
}
