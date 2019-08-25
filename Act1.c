#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	float x;
	float r;
	printf ("Inserta una variable: ");
  	scanf("%f",&x);
	r = (((x-1.0)/4.0) - ((x-5.0)/36.0));
	printf("%.6f", r);
	return 0;
}
