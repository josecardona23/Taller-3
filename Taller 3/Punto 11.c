#include <stdlib.h>
#include <stdio.h>
//prototipo de funcion
void llenarVector();  
void compOrden (int vector[], int);

int tam, vector [50];

int main(int argc, char** argv) {
	//llamando a la funcion
	llenarVector();   
	compOrden(vector, tam);
	
	return 0;
}
//Llenando el vector
void llenarVector(){ 
	int i;
	printf("Ingrese la cantidad de elementos del vector: ");
	scanf("%d", &tam);
	
	for(i=0; i<tam; i++){
		printf("Ingrese un numero: ");
		scanf("%d", &vector[i]);
	}
}
//Comprobando el orden del vector
void compOrden(int vector[], int tam){
	int i=0;
	char cont = 'F';
	
	while((cont == 'F')&&(i<tam-1)){
		if(vector[i]>vector[i+1]){
			cont = 'V';
		}
	}	i++;
	
	if(cont=='F'){
		printf("\nEl vector esta ordenado en forma creciente");
	}else{
		printf("\nEl vector no esta ordenado");
	}
}

