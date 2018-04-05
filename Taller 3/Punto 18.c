#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void datos();//prototipo de funcion.
void llenarMatriz(int matriz[100][100], int filas, int columnas);
void mostrarMatriz(int matriz[100][100], int filas, int columnas);

int matriz[100][100], filas, columnas;

int main(){
	datos(); //Llamamos a las funciones.
	llenarMatriz(matriz, filas, columnas);
	mostrarMatriz(matriz, filas, columnas);
	
	return 0;
}
//Pedimos al usuario la cantidad de filas y columnas de la matriz.
void datos(){
	printf("Ingrese el numero de filas y columnas de la matriz: ");
	printf("\nFilas: ");
	scanf("%d", &filas);
	printf("Columnas: ");
	scanf("%d", &columnas);
}
//generamos numeros aleatorios para llenar la matriz.
void llenarMatriz(int matriz[100][100], int filas, int columnas){
	int i, j;
	printf("\nAhora llenamos la matriz con numeros aleatorios: \n\n");
	srand(time(0));
	for(i=0; i<filas; i++){
		for(j=0; j<columnas; j++){
			matriz[i][j]=rand()%2;
		}
	}
}
//Imprimimos la matriz con los numero aleatorios ya generados.
void mostrarMatriz(int matriz[100][100], int filas, int columnas){
	int i, j;
	
	for(i=0; i<filas; i++){
		for(j=0; j<columnas; j++){
			printf("%d ", matriz[i][j]);
		}
		printf("\n");
	}
}
