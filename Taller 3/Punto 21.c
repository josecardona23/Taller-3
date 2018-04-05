#include<stdio.h>
#include<stdlib.h>
//Prototipo de funcion
int A(char *); 
int E(char *);
int I(char *);
int O(char *);
int U(char *);

int main(){
	char cadena[50];
	/Ingresando la cadena de texto
	printf("Ingrese una cadena de texto: ");  
	fgets(cadena, 50, stdin);
	//Imprimiendo la cantidad de veces que aparecen las vocales
	printf("\nLa vocal a aparece: %d veces",A(cadena));
	printf("\nLa vocal e aparece: %d veces",E(cadena));
	printf("\nLa vocal i aparece: %d veces",I(cadena));
	printf("\nLa vocal o aparece: %d veces",O(cadena));
	printf("\nLa vocal u aparece: %d veces",U(cadena));

	return 0;
}
//Determinando si la vocal existe en la cadena 
int A(char *s){
	int a=0;
	while(*s){ 
		switch(*s){
			case 'a': a++;
		}
		s++;	
	}return a;
}

int E(char *s){
	int e=0;
	while(*s){ 
		switch(*s){
			case 'e': e++;
		}
		s++;	
	}return e;
}

int I(char *s){
	int i=0;
	while(*s){ 
		switch(*s){
			case 'i': i++;
		}
		s++;	
	}return i;
}

int O(char *s){
	int o=0;
	while(*s){ 
		switch(*s){
			case 'o': o++;
		}
		s++;	
	}return o;
}

int U(char *s){
	int u=0;
	while(*s){ 
		switch(*s){
			case 'u': u++;
		}
		s++;	
	}return u;
}
