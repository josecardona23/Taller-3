#include <stdio.h>
#include <stdlib.h>
//Prototipo de funcion
void tiempo(int, int&, int&, int& ); 


int main(int argc, char *argv[]) {
	//Pidiendo al usuario la cantidad de segundos
	int totalSeg, horas, min, seg;
	printf("Ingrese la cantidad de segundos: ");
	scanf("%d", &totalSeg);
	//Llamando a la funcion
	tiempo(totalSeg, horas, min, seg);
	printf("Tiempo equivalente a la cantidad de segundos ingresados");
	printf("\nHoras: %d", horas);
	printf("\nMinutos: %d", min);
	printf("\nSegundos: %d", seg);
	return 0;
}
//Calculando la cantidad de segundos, minutos y horas segun el valor ingresado
void tiempo(int totalSeg, int& horas, int& min, int& seg){
	horas = totalSeg/3600;
		totalSeg%=3600;
	min = totalSeg/60;
	seg = totalSeg%=60;
	
	
}
