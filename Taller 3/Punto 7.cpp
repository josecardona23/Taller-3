#include <stdlib.h>
#include <stdio.h>
//Prototipo de funcion
void cambio(int, int&, int&, int&, int&, int&, int&);
int valor,cien=0,cincuenta=0,veinte=0,diez=0,cinco=0,uno=0;

int main(){
	//Pidiendo al usuarion un valor en dolares
	printf("Ingrese un valor: ");
	scanf("%d", &valor);
	//Llamando a la funcion
	cambio(valor, cien, cincuenta, veinte, diez, cinco, uno);
	//Imprimiendo la cantidad de billetes a entregar como cambio
	printf("La cantidad de billetes a entregar como cambio son \n");
	printf("Cien %d", cien);
	printf("\nCincuenta %d", cincuenta);
	printf("\nVeinte %d", veinte);
	printf("\nDiez %d", diez);
	printf("\nCinco %d", cinco);
	printf("\nUno %d", uno);
	
	return 0;
}
//Definiendo el valor de cada billete
void cambio(int valor, int& cien, int& cincuenta, int& venite, int& diez, int& cinco, int& uno){
	cien = valor/100;
		valor%=100;
	cincuenta = valor/50;
		valor%=50;
	veinte = valor/20;
		valor%=20;
	diez = valor/10;
		valor%=10;
	cinco = valor/5;
	uno = valor%=5;
	
}
