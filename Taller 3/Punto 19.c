#include <stdio.h>
#include <stdlib.h>
//Prototipo de funcion
void datos();
void mostrarMatriz(int matriz[10][10], int f, int c);
int matriz[10][10], f=4, c=4;
int n1, n2, n3, n4;

int main(int argc, char *argv[]) {
	//Llamando a la funcion
	datos();
	mostrarMatriz(matriz, f, c);
	return 0;
}
//Llenando los datos
void datos(){
	int i, j;
	printf("Ingrese 4 numeros \n");
	scanf("%d", &n1);
	scanf("%d", &n2);
	scanf("%d", &n3);
	scanf("%d", &n4);
	//elevando cada elemento
	for(i=0; i<f; i++){
		for(j=0; j<c; j++){
			if(i==0 && j==0){
				matriz[i][j]=n1;
			}
			if(i==0 && j==1){
				matriz[i][j]=n1*n1;
			}
			if(i==0 && j==2){
				matriz[i][j]=n1*n1*n1;
			}
			if(i==0 && j==3){
				matriz[i][j]=n1*n1*n1*n1;
			}
			if(i==1 && j==0){
				matriz[i][j]=n2;
			}
			if(i==1 && j==1){
				matriz[i][j]=n2*n2;
			}
			if(i==1 && j==2){
				matriz[i][j]=n2*n2*n2;
			}
			if(i==1 && j==3){
				matriz[i][j]=n2*n2*n2*n2;
			}
			if(i==2 && j==0){
				matriz[i][j]=n3;
			}
			if(i==2 && j==1){
				matriz[i][j]=n3*n3;
			}
			if(i==2 && j==2){
				matriz[i][j]=n3*n3*n3;
			}
			if(i==2 && j==3){
				matriz[i][j]=n3*n3*n3*n3;
			}
			if(i==3 && j==0){
				matriz[i][j]=n4;
			}
			if(i==3 && j==1){
				matriz[i][j]=n4*n4;
			}
			if(i==3 && j==2){
				matriz[i][j]=n4*n4*n4;
			}
			if(i==3 && j==3){
				matriz[i][j]=n4*n4*n4*n4;
			}
		}
	}
}

//Imprimiendo la matriz con los elementos ya elevados

void mostrarMatriz(int matriz[10][10], int f, int c){
	int i, j;
	printf("\nMostrando la matriz. \n");
	for(i=0; i<f; i++){
		for(j=0; j<c; j++){
			printf("%d ", matriz[i][j]);		
		}printf("\n");
	}
}
