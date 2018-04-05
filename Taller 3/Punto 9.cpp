#include <stdlib.h>
#include <stdio.h>
//Prototipo de funcion
void calc_anios(int totalDias, int& anio, int& mes, int& dia);

int main(int argc, char** argv) {
	int totalDias, anio, mes, dia;
	//Pidiendo al usuario el numero de días transcurridos
	printf("Ingrese el numero de dias: ");
	scanf("%d", &totalDias);
	//Llamando a la funcion
	calc_anios(totalDias, anio, mes, dia);
	//Imprimiendo la fecha actual
	printf("La fecha actual es %d/%d/%d", dia+1, mes+1, anio+2000);
	
	return 0;
}
//Calculando los días, meses y años 
void calc_anios(int totalDias, int&anio, int&mes, int& dia){
	anio = totalDias / 365;
		totalDias %= 365;
	mes = totalDias / 30;
	dia = totalDias %= 30;
	
}
