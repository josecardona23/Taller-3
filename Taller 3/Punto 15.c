#include <stdio.h>
#include <stdlib.h>
//Prototipo de funcion
void llenarMatriz();
int menorFila (int matriz[][100], int filas, int columnas);
int filas, columnas, matriz[100][100];

int main(int argc, char *argv[]) {
	//Llamando a la funcion
	llenarMatriz();
	//Imprimiendo el numero menor de la fila seleccionada
	printf("El numero menor de la fila seleccionada es: %d", menorFila(matriz, filas, columnas));	
	return 0;
}
//Llenando la matriz
void llenarMatriz(){
	printf("Ingrese las dimensiones de la matriz\n");
	printf("Filas: ");
	scanf("%d", &filas);
	printf("Columnas: ");
	scanf("%d", &columnas);
	int i, j;
	for(i=0; i<filas; i++){
		for(j=0; j<columnas; j++){
			printf("Ingrese un numero: ");
			printf("[%d][%d]", i, j);
			scanf("%d", &matriz[i][j]);
		}
	}
}
//Determinando el numero menor de la fila seleccionada
int menorFila (int matriz[][100], int filas, int columnas){
	int i, j, fila, menor=9999;
	
	printf("Ingrese el numero de la fila a buscar: ");
	scanf("%d", &fila);
	for(i=0; i<filas; i++){
		for(j=0; j<columnas; j++){
			if(i==fila){
				if(matriz[i][j]<menor){
					menor = matriz[i][j];
				}
			}
		}
	}
	return menor;
}
