#include <stdio.h>
#include <stdlib.h>

/* Autor: Luis Eduardo Cortez Gonzalez
   Fecha: 12/09/2019
   Grupo: 008
   Horario: Sabado 9am-11am
   Matricula: 1546624*/
   
//**************ACTIVIDAD1*****************

int nota;
int main(){
	
	//ingresara la nota de la materia
	
	printf("\n Ingrese la nota de la materia: ");
	scanf("%d",&nota);
	
	//Aqui se inician las opciones para la nota que haya ingresado si es mayor igial que 5 y menor igual a 10, si es mayor que 0 y menor a 5, si es menor a 0 y mayor que 10
	
	if(nota>=5&&nota<=10){
	
		//se imprime APTO si se cumple la condicion
		
		printf("\n\n\t APTO \n\n");
// 
  }if(nota>=0&&nota<5)
 {
 
	
        printf("\n\n\t  N0 APTO \n\n");

 }if(nota<0||nota>10){
 
 printf("\n\n\t ERROR: ingreso mala nota");
}

//**************ACTIVIDAD2*****************

int dato;

//se ingresa el numero entero de la semana

printf("\n Ingrese un dia de la semana(numero): ");
scanf("%d",&dato);

// se inicia las opciones para el numero ingresado e imprima el dia de la semana 

if(dato==1){
	
	printf("\n\n\t LUNES \n");
}

if(dato==2){
	
	printf("\n\n\t MARTES \n");
}

if(dato==3){
	
	printf("\n\n\t MIERCOLES \n");
}

if(dato==4){
	
	printf("\n\n\t JUEVES \n");
}

if(dato==5){
	
	printf("\n\n\t VIERNES \n");
}

if(dato==6){
	
	printf("\n\n\t SABADO \n");
}

if(dato==7){
	
	printf("\n\n\t DOMINGO \n");
}

if(dato<1||dato>7){
	
	printf("\n\n\t ERROR: Dia incorrecto \n");

}

//**************ACTIVIDAD Extra*****************

int opc;

//se ingresa la opcion que desea elegir

printf("\n Ingrese la opcion deseada: ");
scanf("%d",&opc);

//se imprime la opcion que eligo

printf("\n\n\t MENU\n\n");
printf("\n\n\t Usted escogio la opcion: %d ",opc);
 
//termina el programa

return 0;	
}
