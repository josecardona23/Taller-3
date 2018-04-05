#include <stdio.h>
#include <stdlib.h>
//Prototipo de funcion
void datos();
void ordenAsc(int vector[100], int tam);
void mostrarMatriz(int vector[100], int tam);
int vector[100], tam;

int main(int argc, char *argv[]) {
	//Llamando a la funcion
	datos();
	ordenAsc(vector, tam);
	mostrarMatriz(vector, tam);
	return 0;
}
//Llenando el vector
void datos(){
	int i;
	printf("Ingrese el tamaño del vector: ");
	scanf("%d", &tam);
	for(i=0; i<tam; i++){
		printf("%d ", i+1);
		printf(".Ingrese un numero: ");
		scanf("%d", &vector[i]);
	}
}
//Ordenando el vector en forma ascendente
void ordenAsc(int vector[100], int tam){
	int i, j, aux;
	
	for(i=0; i<tam-1; i++){
		for(j=i; j<tam; j++){
			if(vector[j]<vector[i]){
				aux=vector[i];
				vector[i]=vector[j];
				vector[j]=aux;
			}
		}
	}
}
//Imprimiendo el vector en forma ascendente
void mostrarMatriz(int vetor[100], int tam){
	int i;
	printf("Vector ordenado de forma ascendente: ");
	for(i=0; i<tam; i++){
		printf("%d ", vector[i]);
	}printf(" ");
}

