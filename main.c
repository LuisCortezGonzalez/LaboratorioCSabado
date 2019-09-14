#include <stdio.h>
#include <stdlib.h>

/* Autor: Luis Eduardo Cortez Gonzalez
   Fecha: 14/09/2019
   Grupo: 008
   Horario: Sabado 9am-11am
   Matricula: 1546624 */
   
//xxxx Actividad 1

char opcion;
int dato,sum=0;
int main() {
	//se utiliza en este programa el do/while 
	do {
		// se pregunta el numero que se ingresara 
		
		printf("\n Ingrese un nunmero: ");
		scanf("%d",&dato);
		// Aqui se suman los numeros ingresados
		sum+=dato;
		// Aqui se hace la pregunta si quiere ingresar un numero mas 
		printf("\n Desea introducir otro numero: ");
		// El fflush es para borrar el enter que se dio 
		fflush(stdin);
		scanf("%c",&opcion);
		
	}while(opcion=='s');
	// Aqui se imprimer la suma de todos los numeros ingresados
	printf("\n\n\t  La suma de los numeros introducidos es: %d \n\n ",sum);
	
	//xxxx Actividad 2
	
	int num=0;
	// Aqui se usara un while para saber si el numero que ingresaste no sea mayor a 100,si es mayor el programa termina 
	while (num<=100){
		
		// Se pregunta el numero a ingresar 
			printf("\n Ingrese un numero: ");
	        scanf("%d",&num);
		    printf("\n\n\t Ingreso el nunmero: %d \n\n", num);
		
		
	}
		
	return 0;
	//cambio
}
