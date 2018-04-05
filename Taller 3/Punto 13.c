#include <stdio.h>
#include <stdlib.h>
//Prototipo de funcion
void llenarVector();
void impares(int vector[], int tam);

int vector[50], tam;

int main(int argc, char *argv[]) {
	//Llamando a la funcion
	llenarVector();
	impares(vector, tam);
	
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
//Calculando los numeros pares ingresados en el vector
void impares (int vector[], int tam){
	int j=0, i, impares[50];
	for(i=0;i<tam;i++){
		if(vector[i]% 2 != 0){
			impares[j]=vector[i];
			j++;
		}
	}
	//Imprimiendo los numeros pares ingresados en el vector
	printf("\nMostrando los numeros impares ingresados en el vector: ");
	for(i=0; i<j; i++){
		printf("%d ", impares[i]);
	}
}


