#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	float x;
	float r1,r2,r3,r4;
	printf ("Inserta una variable: ");
  	scanf("%f",&x);
	r1 = (((x-1.0)/4.0) - ((x-5.0)/36.0));
	printf("\n\n\t\t Respuesta 1: %.6f", r1);
	
	r2 = 6*(((x+1.0)/8.0) - ((2*x-3.0)/16.0));
	printf("\n\n\t\t Respuesta 2: %.6f", r2);
	
	return 0;
}
