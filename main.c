#include <stdio.h>
#include <stdlib.h>

/* Autor: Luis Eduardo Cortez Gonzalez
   Fecha: 2/11/2019
   Grupo: 008
   Horario: Sabado 9am-11am
   Matricula: 1546624*/


int main() {
	
// xxxxx ACTIVIDAD 1 xxxxx

//se ingresan las variables y el apuntador *cad1 y decimos q es igual a cad
char cad[20];
char *cad1=cad;
int cont=0;
	
	//se pregunta cual palabra ingresara
    printf("\n Ingrese una palabra: ");
    fflush(stdin);
    gets(cad);
    
  while(*cad1!='\0'){
  
  //se inicia un if para saber si hay alguna vocal en la palabra ingresada 
  if(*cad1=='a' || *cad1=='e' || *cad1=='i' || *cad1=='o' || *cad1=='u'){
  	
  	//se cuenta cuantas vocales hay 
  	cont++;
  }
  //para q el while revise cada letra 
  cad1++;
}

// se imprime el numero de vocales
  printf("\n La palabra ingresada tiene %d vocales \n ",cont);
  
  
// xxxxx ACTIVIDAD 2 xxxxx
 
 //se ingresan las variables y los apuntadores 
int x,y;
int *w;
int *z;
int suma=0;

// aqui se declara que x y y son apuntadores y son iguales a w y z
	w=&x;
	z=&y;
	
	//se piden los numeros enteros 
	printf("\n Ingrese un numero entero: ");
	scanf("%d",&x);
	printf("\n Ingrese un numero entero: ");
	scanf("%d",&y);
	//se hace la suma 
	suma= *w + *z;
	
	//se imprime el resultado
	
	printf("\n La suma es: %d",suma);
	


	return 0;
	//cambio
}
