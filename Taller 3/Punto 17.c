#include <stdio.h>
#include <stdlib.h>
//Prototipo de funcion
void array(float vector[], int);
float vector[] = {32.583, 11.239, 45.781, 22.237};
int tam = 4;
int main(int argc, char *argv[]) {
	array(vector, tam);
	return 0;
}
//Imprimiendo los elementos del vector
void array(float vector[], int tam){
	int i;
	printf("Los elementos del vector son: \n");
	for(i=0; i<tam; i++){
		printf("%0.3f", vector[i]);
		printf("\n");
		} 
		
		
}
