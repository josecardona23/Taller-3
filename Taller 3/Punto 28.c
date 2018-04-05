#include <stdio.h>
#include <stdlib.h>
//Prototipo de funcion
bool primo(int n);
void insertarNum(int n);
void mostrarMatriz(int matriz[3][3], int filas, int columnas);

int matriz[3][3], filas=0, columnas=0, L=3;

int main(int argc, char *argv[]) {
	int n;
	while(filas != L){
		n = rand()%100;
		if(primo(n)){
			insertarNum(n);
		}
	}
	return 0;
}

//Determinando si el numero generado es primo
bool primo(int n){
	int i, primo=0;
	
	for(i=1; i<n; i++){
		if(n % i== 0){
			primos+=1;
		}
	}
	
	if(primos == 2){
		return true;
	}else{
		return false;
	}
}
//Llenando la matriz con numeros primos
void insertarNum(int n){
	int i, j;
	matriz[filas][columnas]=n;
	columnas+=1;
	if(columnas==L){
		filas+1;
		columnas=0;
	}
	//imprimiendo la matriz
	for(i=0; i<filas; i++){
		for(j=0; j<columnas; j++){
			printf("%d ", matriz[i][j]);
		}
	}
}
