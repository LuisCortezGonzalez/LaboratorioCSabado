#include <stdio.h>
#include <stdlib.h>
/* Autor: Luis Eduardo Cortez Gonzalez
   Fecha: 31/08/2019
   grupo:
   Horario: Sabado 9am-11am
   Matricula: 1546624*/

/* Actividad 1*/
int a,b;
int main(int argc, char *argv[]) {
	/* Aqui se ingresaran los datos para a y b*/
	printf("\n\n Ingrese un numero a: ");
	scanf("%d",&a);
	printf("\n\n Ingrese un numero b: ");
	scanf("%d",&b);
	printf("\n\n\t Actividad 1\n\n");
	/* aqui se utilizara el if/else para saber q numero ingresado es mayor*/
	if (a>b)
	printf("\n\n\t El numero mas grande es: %d \n\n",a);
	else 
	printf("\n\n\t El numero mas grande es: %d \n\n",b);
	
	/* Actividad 2*/
	int a=5,b=3,c=-12;
	/* Aqui se ingresaron 3 nunmeros definidos para a,b,c */
	printf("\n\n\t Actividad 2 \n\n");
	/* Aqui comienzan los if/else donde en cada uno se estara resolviendo en la expresion dada con los valores introducidos y 
	imprimira si es correcto o incorrecto */
	if (a>3)
	{
	
	  printf("\n Es correcto ");
}
	else 
	{
	
	   printf("\n Es incorrecto ");
}
    if (a>c)
    {
    	printf("\n Es correcto ");
	}
	else 
	{
		printf("\n Es incorrecto ");
	}
	if (b!=c)
	{
		printf("\n Es correcto ");
	}
	else 
	{
		printf("\n Es incorrecto ");
	}
	if (a==3)
	{
		printf("\n Es correcto");
	}
	else 
	{
		printf("\n Es incorrecto ");
	}
	if (a*b==15)
	{
		printf("\n Es correcto");
	}
	else 
	{
		printf("\n Es incorrecto");
	}
	if (c/b<a)
	{
		printf("\n Es correcto");
	}
	else 
	{
		printf("\n Es incorrecto");
	}
	if (c/b==-10)
	{
		printf("\n Es correcto");
	}
	else 
	{
		printf("\n Es incorrecto");
	}
	if (a+b+c==5)
	{
		printf("\n Es correcto");
	}
	else 
	{
		printf("\n Es incorrecto");
	}
	if ((a+b==8)&&(a-b==2))
	{
		printf("\n Es correcto");
	}
	else 
	{
		printf("\n Es incorrecto");
	}
	if ((a+b == 8) || (a-b == 6))
	{
		printf("\n Es correcto");
	}
	else 
	{
		printf("\n Es incorrecto");
	}
	if (a>3&&b>3&&c<3)
	{
		printf("\n Es correcto ");
	}
	else 
	{
		printf("\n Es incorrecto");
	}
	/* Actividad 3*/
	int q,w,e;
	/* Aqui se ingresan nuevos valores en esta ocacion por el usuario y se resolveran las expresiones dadas*/
	
	printf("\n\n\t actividad 3\n\n");
	printf ("\n Ingrese el primer numero: ");
	scanf("%d",&q);
	printf ("\n Ingrese el segundo numero: ");
	scanf("%d",&w);
	printf ("\n Ingrese el tercer numero: ");
	scanf("%d",&e);
	/*Aqui de igual manera que en la actividad 2 seran las mismas expresiones utilizando if/else pero con valores ingresados por el usuario
	y se imprimira de igual forma si es correcto o incorrecto el resultado*/
	if (q>3)
	{
	
	  printf("\n Es correcto ");
}
	else 
	{
	
	   printf("\n Es incorrecto ");
}
    if (q>e)
    {
    	printf("\n Es correcto ");
	}
	else 
	{
		printf("\n Es incorrecto ");
	}
	if (w!=e)
	{
		printf("\n Es correcto ");
	}
	else 
	{
		printf("\n Es incorrecto ");
	}
	if (q==3)
	{
		printf("\n Es correcto");
	}
	else 
	{
		printf("\n Es incorrecto ");
	}
	if (q*w==15)
	{
		printf("\n Es correcto");
	}
	else 
	{
		printf("\n Es incorrecto");
	}
	if (e/w<q)
	{
		printf("\n Es correcto");
	}
	else 
	{
		printf("\n Es incorrecto");
	}
	if (e/w==-10)
	{
		printf("\n Es correcto");
	}
	else 
	{
		printf("\n Es incorrecto");
	}
	if (q+w+e==5)
	{
		printf("\n Es correcto");
	}
	else 
	{
		printf("\n Es incorrecto");
	}
	if ((q+w==8)&&(q-w==2))
	{
		printf("\n Es correcto");
	}
	else 
	{
		printf("\n Es incorrecto");
	}
	if ((q+w == 8) || (q-w == 6))
	{
		printf("\n Es correcto");
	}
	else 
	{
		printf("\n Es incorrecto");
	}
	if (q>3&&w>3&&e<3)
	{
		printf("\n Es correcto ");
	}
	else 
	{
		printf("\n Es incorrecto");
	}
	
	
	
	return 0;
	//cambio
}
