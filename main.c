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

//ingresar las variables
char texto[30],invert;
int i,j,longi;
FILE *yin,*yang;

//se abre el archivo
yin = fopen("archivo.txt","w");

//se ingresa el texto 
printf("\n Ingrese una cadena de texto: ");
scanf("%s",&texto);

//lee la longitud del texto ingresado
longi = strlen(texto);

//se imprime en el archivo
fprintf(yin,"%s",texto);

//para abrir el archivo en forma de lectura
yin = freopen("archivo.txt","r",yin);

//con rewind se regresa al inicio del texto
rewind(yin);

//con este comando se cierra el texto
fclose(yin);

//se crea un nuevo archivo "archivo_alreves"
yang = fopen("archivo_alreves.txt","w");

//se inicia un cilo for para poder invertir el texto ingresado
for(i=0,j=longi-1;i<longi/2;i++,j--){
	
	invert = texto[i];
	texto[i] = texto[j];
	texto[j] = invert;
	
}

//se imprime el texto pero invertido en el nuevo archivo creado
fprintf(yang,"%s",texto);

//se vuelve a abrir el archivo pero el nuevo con el texto inverso en forma de lectura
yang = freopen("archivo_alreves","r",yang);

//se cierra el archivo	
fclose(yang);

//termina la primera actividad


//xxxxx ACTIVDAD 2 xxxxx

//se ingresan las variables
FILE *x,*y;
int a,b,suma;

//se crea un nuevo archivo llamado numeros
x = fopen("numeros.txt","w");

//se piden los datos de a y b enteros
printf("\n Ingrese el numero a: ");
scanf("%d",&a);
printf("\n Ingrese el numero b: ");
scanf("%d",&b);

//se imprime los datos ingresados en el archivo
fprintf(x,"a = %d b = %d",a,b);

//se abre el archivo en lectura
x = freopen("numeros.txt","r",x);

//se cierra el archivo
fclose(x);

//se crea un nuevo archivo llamado sumaAyB ahi se guardara la suma de los datos ingresados
y = fopen("sumaAyB.txt","w");

//se hace la suma de a y b
suma = a+b;

//se imprime la suma en el nuevo archivo sumaAyB
fprintf(y,"\n La suma de a y b es: %d",suma);

//se abre el archivo en lectura
y = freopen("sumaAyB.txt","r",x);

//se cierra el archivo
fclose(y);


//termina la actividad

	return 0;
	//cambio
}
