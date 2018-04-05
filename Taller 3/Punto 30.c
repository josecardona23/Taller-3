#include <stdio.h>
#include <stdlib.h>
//Prototipo de funcion
void datos();
void matrizTransp(int matriz[100][100], int filas, int columnas);
int matriz[100][100], filas, columnas;

int main(int argc, char *argv[]) {
	//Llamando a la funcion
	datos();
	matrizTransp(matriz, filas, columnas);
	return 0;
}
//Especificando las dimenciones de la matriz
void datos(){
	int i, j;
		
		printf("Ingrese las dimensiones de la matriz: \n");
		printf("Filas: ");
		scanf("%d", &filas);
		printf("Columnas: ");
		scanf("%d", &columnas);
		for(i=0; i<filas; i++){
		for(j=0; j<columnas; j++){
			printf("Ingrese un numero [%d][%d]: ", i, j); 	//Llenando la matriz
			scanf("%d", &matriz[i][j]);
		}
	}
}

void matrizTransp(int matriz[100][100], int filas, int columnas){
	int i, j;
	//Mostrando la matriz original
	printf("Matriz original. \n");
	for(i=0; i<filas; i++){
		for(j=0; j<columnas; j++){
			printf("%d ", matriz[i][j]);
		}
		printf("\n");
	}
	//Mostrando la matriz transpuesta 
	printf("\nMatriz transpuesta.\n");
	for(i=0; i<filas; i++){
		for(j=0; j<columnas; j++){
			printf("%d ", matriz[j][i]);
		}
		printf("\n");
	}
	
}
