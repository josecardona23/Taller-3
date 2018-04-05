#include <stdio.h>
#include <stdlib.h>
//prototipo de funcion
int maximo(int arg1, int arg2, int arg3);
	int arg1=3, arg2=8, arg3=9;
		max=0;
int main() {
	//Llamando a la funcion
	printf("El maximo valor de los argumentos es: %d", maximo(arg1, arg2, arg3));
	
	
	return 0;
}
//Calculando el maximo de los argumentos
int maximo(int a, int b, int c){

	
	if((arg1>arg2) && (arg1>arg3)){
		max=arg1;
	}else if ((arg2>arg1) && (arg2>arg3)){
		max=arg2;
	}else{
		max=arg3;
	}
	return max;
}
