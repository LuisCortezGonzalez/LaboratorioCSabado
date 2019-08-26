#include <stdio.h>
#include <stdlib.h>

/* *Autor: Luis Eduardo Cortez Gonzalez
   *Fecha: 25/08/2019
   *Grupo: 008
   *Horario: Sabado 9:00am - 11:00am
   *Matricula: 1546624
   */

int main() {
	float x;
	float r1,r2,r3,r4;
	/* se introducira una variable*/
	printf ("Inserta una variable: ");
  	scanf("%f",&x);
  	
  	/* se hace la primera ecuacion*/
  	
	r1 = (((x-1.0)/4.0) - ((x-5.0)/36.0));
	
	/* se imprimira el resultado */
	
	printf("\n\n\t\t Respuesta 1: %.6f", r1);
	
	/* se hace la segunda ecuacion*/
	
	r2 = 6.0*(((x+1.0)/8.0) - ((2.0*x-3.0)/16.0));
	
	/* se imprimira el resultado */
	
	printf("\n\n\t\t Respuesta 2: %.6f", r2);
	
	/* se hace la tecera ecuacion*/
	
	r3 = ((2.0/3.0)*(x-(1.0-(x-2.0)/3.0)) + 1.0);
	
	/* se imprimira el resultado */
	
	printf("\n\n\t\t Respuesta 3: %.6f", r3);
	
	/* se hace la cuarta ecuacion*/
	
	r4 = 2-(-2*(x+1)-((x-3)/2));
	
	/* se imprimira el resultado */
	
	printf("\n\n\t\t Respuesta 4: %.6f", r4);
	
	return 0;
}
