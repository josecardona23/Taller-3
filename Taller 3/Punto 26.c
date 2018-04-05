#include <stdio.h>
#include <stdlib.h>
//Prototipos de funcion
void datos();	
void sumaMatriz(int matriz[3][3], int filas, int columnas);
void mostrarMatriz(int matriz[3][3], int filas, int columnas);
int matriz[3][3], filas=3, columnas=3;


int main(int argc, char *argv[]) {
	datos();
	mostrarMatriz(matriz, filas, columnas);  //Llamando la funcion.
	sumaMatriz(matriz, filas, columnas);
	return 0;
}

void datos(){   
//Llenando la matriz.
	int i, j;
	
	for(i=0; i<filas; i++){
		for(j=0; j<columnas; j++){
			printf("Ingrese un numero [%d][%d]: ", i, j);
			scanf("%d", &matriz[i][j]);
		}
	}
}
//Sumando e imprimiendo los elementos de la matriz
void sumaMatriz(int matriz[3][3], int filas, int columnas){
	int i, j, matriz2[3][3], suma=0;
	printf("\nMatriz con la suma de cada una de sus posiciones: \n");
	
	for(i=0; i<filas; i++){
		for(j=0; j<columnas; j++){
			suma+=matriz[i][j];
			printf("%d ", suma); 
		}
		printf("\n");
	} 
}


//Imprimiendo la matriz
void mostrarMatriz(int matriz[3][3], int filas, int columnas){
	int i, j, resultado[3][3];;
	printf("\nMATRIZ: \n\n");
	for(i=0; i<filas; i++){
		for(j=0; j<columnas; j++){
			printf("%d ", matriz[i][j]);
		}printf("\n");
	} 
	

	
}
