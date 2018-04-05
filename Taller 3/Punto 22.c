#include <stdio.h>
#include <stdlib.h>
//prototipos de funcion
void datos();			
int numPares(int vector[10], int tam);

int const tam = 10;
int vector[10];
	
int main(int argc, char *argv[]) {
	//Llamando las funciones
	datos(); 			
	numPares(vector, tam);
	
	return 0;
}
//Llenando el vector
void datos(){     	
	int i;
	for(i=0; i<tam; i++){
		printf("%d", i+1);
		printf(". Ingrese un numero: ");
		scanf("%d", &vector[i]);
	}
}
//Determinando los numeros pares ingresados al vector
int numPares (int vector[], int tam){
	int i, j=0;
	printf("Los numeros pares ingresados en el vector son: ");
	for(i=0; i<tam; i++){
		if(vector[i] % 2 == 0){
			printf("%d ", vector[i]);//Imprimiendo los numeros pares 
		}
	
	} 
}
