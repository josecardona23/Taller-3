#include <stdio.h>
#include <stdlib.h>
//Prototipo de funcion
void llenarMatriz();
void matrizSimetrica(int matriz[100][100], int filas, int columnas);

int matriz[100][100], filas, columnas;

int main(int argc, char *argv[]) {
	llenarMatriz();
	matrizSimetrica(matriz, filas, columnas);
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
			scanf("%d", &matriz[i][j]);
		}
	}
}
//Determinando si la matriz es simetrica o no
void matrizSimetrica(int matriz[][100], int filas, int columnas){
	int i, j;
	int cont=0;
	if(filas==columnas){
		for(i=0; i<filas; i++){
		for(j=0; j<columnas; j++){ 
				if(matriz[i][j]==matriz[j][i]){
					cont++;
				}
			}
		}
	}
	if(cont == filas * columnas){

		printf("\nLa matriz es simetrica");  //Imprimiendo el resultado
	}else{
		printf("\nLa matriz no es simetrica");
	}
}

