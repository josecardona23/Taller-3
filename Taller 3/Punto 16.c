#include <stdio.h>
#include <stdlib.h>
//prototipo de la funcion
struct Fecha{
	int dia, mes, anio;
}f1, f2;

void entradaDatos();
Fecha mayor(Fecha , Fecha );
void mostrarFecha(Fecha);

int main(int argc, char *argv[]) {
	entradaDatos();
	Fecha x = mayor(f1, f2);
	mostrarFecha(Fecha);
	return 0;
}
//Llenando los datos
void entradaDatos (){
	printf("Ingrese la primer fecha.\n");
	printf("Día: ");
	scanf("%d", &f1.dia);
	printf("Mes: ");
	scanf("%d", &f1.mes);
	printf("Anio: ");
	scanf("%d", &f1.anio);
	
	printf("Ingrese la segunda fecha. \n");
	scanf("Dia: ", &f2.dia);
	printf("Mes: ");
	scanf("%d", &f2.mes);
	printf("Anio: ");
	scanf("%d", &f2.anio);
}

//calculando la fecha más reciente
Fecha mayor(Fecha f1, Fecha f2){
	Fecha mayorFecha;
	
	if(f1.anio == f2.anio){
		//Ahora, comprobamos los meses
		if(f1.mes ==f2.mes){
			//Por ultimo comprobamos los dias
			if(f1.dia == f2.dia){
				printf("Las fechas son iguales");
			}
			else if(f1.dia > f2.dia){
				mayorFecha = f1;
			}
			else{
				mayorFecha = f2;
			}
		}
		else if(f1.mes > f2.mes){
			mayorFecha = f1;
		}
		else{
			mayorFecha = f2;
		}
	}
	else if(f1.anio > f2.anio){
		mayorFecha = f1;
	}
	else{
		mayorFecha = f2;
	}
	return mayorFecha;
}
//Imprimir la el resultado 
void mostrarFecha (Fecha x){
	printf("La fecha mayor de las ingresadas es: %d/%d/%d", x.dia, x.mes, x.anio);
}
