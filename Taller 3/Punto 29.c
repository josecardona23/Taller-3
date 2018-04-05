#include <stdio.h>
#include <stdlib.h>
//Prototipos de funcion.
void datos();
void sumaMatrices(int matriz1[100][100], int matriz2[100][100], int filas, int columnas);
int matriz1[100][100], matriz2[100][100], filas, columnas;
int main(int argc, char *argv[]) {
	//Llamando la funcnion
	datos();
	sumaMatrices(matriz1, matriz2, filas, columnas);
	return 0;
}
//Llenando la matriz
void datos(){
	int i, j;
	printf("Ingrese las dimensiones de la matriz\n");
	printf("Filas: ");
		scanf("%d", &filas);
	printf("Columnas: ");
		scanf("%d", &columnas);
		
		//Llenando la primer matriz
		printf("\nIngrese los numeros de la primer matriz\n");
		for(i=0; i<filas; i++){
			for(j=0; j<columnas; j++){
				printf("Ingrese un numero [%d][%d]: ", i, j);
				scanf("%d", &matriz1[i][j]);
			}
		}
		
		//Llenando la segunda matriz
		printf("\nIngrese los numeros dela segunda matriz");
		for(i=0; i<filas; i++){
			for(j=0; j<columnas; j++){
				printf("Ingrese un numero [%d][%d]: ", i, j);
				scanf("%d", &matriz2[i][j]);
			}
		}
}


void sumaMatrices(int matriz1[100][100], int matriz2[100][100], int filas, int columnas){
	//Sumando las dos matrices
	int i, j, resultado[100][100];
	printf("MATRIZ\n");
	for(i=0; i<filas; i++){
		for(j=0; j<columnas; j++){
			resultado[i][j]=matriz1[i][j]+matriz2[i][j];
		}
	}
	
	//Imprimiendo la matriz
	for(i=0; i<filas; i++){
		for(j=0; j<columnas; j++){
			printf("%d ", resultado[i][j]);
		}
		printf("\n");
	}
}


