#include <stdio.h>
#include <stdlib.h>
//Prototipo de funcion
void datos();
void funpot(int b, int e);
int e, b;

int main() {
	//Llamando a la funcion
	datos();
	funpot(b, e);
	return 0;
}
//Llenando las variables
void datos(){
	printf("Ingrese la base: ");
	scanf("%d", &b);
	
	printf("Ingrese el exponente: ");
	scanf("%d", &e);
}
//Elevando la base segun su exponente
void funpot(int b, int e){
	int i, pot = 1;
	for(i=1; i<=e; i++){
		pot *= b;
	}
		printf("\n %d elevado a %d = %d", b, e, pot);
}
