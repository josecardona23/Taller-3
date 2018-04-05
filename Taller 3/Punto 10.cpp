#include <stdlib.h>
#include <stdio.h>
//prototipos de funcion
int tam, vector[50];
void llenarVector(); 
int sumaVector(int vector[], int);



int main(int argc, char** argv) {
	//llamando la funcion
	llenarVector();  
	printf("\nLa suma de los elementos del vector es: ", sumaVector(vector, tam));
	return 0;
}

//llenado el vector	
void llenarVector(){ 
	int i;
	printf("Ingrese la cantidad de elementos del arreglo: ");
	scanf("%d", &tam);
	
	for(i=0; i<tam; i++){
		printf("Ingrese un numero: ");
		scanf("%d", &vector[i]);
	}
}
//sumando los elementos del vector
int sumaVector(int vector[], int tam){
	int i, suma=0;
	
	for(i=0; i<tam; i++){
		suma += vector[i];
	}
	return suma;
}
