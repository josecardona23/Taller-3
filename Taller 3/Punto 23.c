#include <stdio.h>
#include <stdlib.h>
//prototipo de funcion
void datos();
void menor(int vector[100], int tam);
int vector[100], tam;

int main(int argc, char *argv[]) {
	//Llamando a la funcion
	datos();
	menor(vector, tam);
	return 0;
}
//Llenando el vector
void datos(){
	int i;
	printf("Ingrese el tamaño del vector: ");
	scanf("%d", &tam);
	
	for(i=0; i<tam; i++){
		printf("%d", i+1);
		printf(". Ingrese un numero: ");
		scanf("%d", &vector[i]);
	}
}
//Determinando el numero menor del vecotr
void menor(int vecto[100], int tam){
	int i, menor=999;
	printf("El numero menor del vector es: ");
	for(i=0; i<tam; i++){
		if(vector[i]<menor){
			menor=vector[i];
		}
	}
		printf("%d ", menor);//Imprimiendo el numero menor
}
