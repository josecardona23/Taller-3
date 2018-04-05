#include <stdio.h>
#include <stdlib.h>
#include <time.h>


//Prototipo de funcion.
void array(int matriz[100][100], int filas, int columnas); 
int matriz[100][100], filas=3, columnas=3;
int main(int argc, char *argv[]) {
	 //Llamando la funcion
	array(matriz, filas, columnas);
	return 0;
}

void array(int matriz[100][100], int filas, int columnas){
	//Llenando la funcion con numeros aleatorios.
	int i, j;
	srand(time(NULL));
	
	for(i=0; i<filas; i++){
		for(j=0; j<columnas; j++){
			matriz[i][j]=3;
		matriz[i][j]=rand()%100;
		}
	} 
	//Imprimiendo la matriz
	for(i=0; i<filas; i++){
		for(j=0; j<columnas; j++){
			printf("MATRIZ")
	printf("%d ",matriz[i][j]);
		}
		printf("\n");
	} 
}
