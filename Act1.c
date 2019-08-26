#include <stdio.h>
#include <stdlib.h>

/* *Autor: Luis Eduardo Cortez Gonzalez
   *Fecha: 25/08/2019
   *Grupo: 
   *Horario: Sabado 9:00am - 11:00am
   *Matricula: 1546624
   */

int main() {
	float x;
	float r1,r2,r3,r4;
	printf ("Inserta una variable: ");
  	scanf("%f",&x);
	r1 = (((x-1.0)/4.0) - ((x-5.0)/36.0));
	printf("\n\n\t\t Respuesta 1: %.6f", r1);
	
	r2 = 6.0*(((x+1.0)/8.0) - ((2.0*x-3.0)/16.0));
	printf("\n\n\t\t Respuesta 2: %.6f", r2);
	
	r3 = ((2.0/3.0)*(x-(1.0-(x-2.0)/3.0)) + 1.0);
	printf("\n\n\t\t Respuesta 3: %.6f", r3);
	
	return 0;
}
