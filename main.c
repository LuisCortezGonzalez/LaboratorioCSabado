#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* Autor: Luis Eduardo Cortez Gonzalez
   Fecha: 16/11/19
   Grupo: 008
   Horario: Sabado 9am-11am
   Matricula: 1546624 */

int main() {
	
//xxxxx ACTIVIDAD 1 xxxxx	

char texto[30],invert;
int i,j,longi;
FILE *yin,*yang;

yin = fopen("archivo.txt","w");

printf("\n Ingrese una cadena de texto: ");
scanf("%s",&texto);
longi = strlen(texto);
fprintf(yin,"%s",texto);

yin = freopen("archivo.txt","r",yin);

rewind(yin);
fclose(yin);

yang = fopen("archivo_alreves.txt","w");
for(i=0,j=longi-1;i<longi/2;i++,j--){
	
	invert = texto[i];
	texto[i] = texto[j];
	texto[j] = invert;
	
}

fprintf(yang,"%s",texto);
yang = freopen("archivo_alreves","r",yang);
fclose(yang);




//xxxxx ACTIVDAD 2 xxxxx

FILE *x,*y;
int a,b,suma;

x = fopen("numeros.txt","w");
printf("\n Ingrese el numero a: ");
scanf("%d",&a);
printf("\n Ingrese el numero b: ");
scanf("%d",&b);
fprintf(x,"a = %d b = %d",a,b);
x = freopen("numeros.txt","r",x);
fclose(x);

y = fopen("sumaAyB.txt","w");
suma = a+b;
fprintf(y,"\n La suma de a y b es: %d",suma);
y = freopen("sumaAyB.txt","r",x);
fclose(y);




	return 0;
	//cambio
}
