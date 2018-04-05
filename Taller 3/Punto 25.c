#include <stdio.h>
#include <stdlib.h>

void datos();
void buscarNumero(int vector[100], int tam);
int vector[100], tam;

int main(int argc, char *argv[]) {
	//Llamando las funciones
	datos(); 
	buscarNumero(vector, tam);
	return 0;
}

void datos(){	
//Ingresando los datos en el vector.
	int i;		
	printf("Ingrese la longitud del vector: ");
	scanf("%d", &tam);
	for(i=0; i<tam; i++){
		printf("%d. Ingrese un numero: ", i+1);
		scanf("%d", &vector[i]);
	}
}

void buscarNumero(int vector[100], int tam){
	 //Buscando el numero en el vector	
	int i, dato;
	char band = 'F';
	i=0; 
	printf("\nIngrese el numero a buscar: ");
	scanf("%d", &dato);	
	
	while((band=='F')&&(i<tam)){
		if(vector[i]==dato){
			band = 'V';
		}
		i++;
	}
	
	if(band== 'F'){
		printf("\nEl numero no existe en el vector"); //Imprimiendo la posicion donde fue encontrado el numero.
	}else if(band=='V'){
		printf("\nNumero encontrado en la posicion --> %d", i);
	}
}
