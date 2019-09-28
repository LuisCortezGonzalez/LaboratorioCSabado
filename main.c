#include <stdio.h>
#include <stdlib.h>

/* Autor: Luis Eduardo Cortez Gonzalez
   Fecha: 28/09/2019
   Grupo: 008
   Horario: Sabado 9am-11am
   Matricula: 1546624 */

int main() {
	//xxxxxx ACTIVIDAD 1
	
	int ndc[24]={28,57,3,12,65,33,21,65,12,85,35,2,7,32,51,54,23,64,23,75,100,35,12,44};
	int r=2;
	//aqui se imprime la posicion 2 del arreglo 
	ndc[r]=57;
	printf("\n hora %d el numero de coche es: %d",r,ndc[r]);
    
    //aqui se cambia la r que vale 21 para que imprima la posicion 21
	r=21;
	ndc[r]=100;
	printf("\n Hora %d el numero de coche es: %d",r,ndc[r]);
	
	//xxxxxx ACTIVIDAD 2
	
	//se declaran 2 variables a y b 
	int a=8, b=4;
	
	//se divide a y b para darle valor a r
	r=a/b;
	
	// aqui se imprime el resultado de r para que imprima el arreglo 
	printf("\n Hora %d el numero de coche es: %d ",r,ndc[r]);
	
	return 0;
	//cambio
}
