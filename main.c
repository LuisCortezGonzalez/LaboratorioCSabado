#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/* Autor: Luis Eduardo Cortez Gonzalez
   Fecha: 26/10/2019
   Grupo: 008
   Horario: Sabado 9am-11am
   Matricula: 1546624*/
   
   //se crea una funcion para saber si es numero primo
   int primo(int num)
   {
   	int res,i;
   	//se inicia un ciclo para saber el num que de 0 
   	for(i=2;i<num;i++){
	   //para saber el residuo 
   	res=num%i;
   	//se inicia un if para saber si el residuo es igual a 0
   	if (res==0){
   		return 0;
	   }
   }
   	
   	return 1;
   	
   }
   //se crea una funcion para multiplicar potencias
   int cuadrado(int ent,int cuad)
   {
   	int i,mult=1;
   	//se inicia un ciclo para que multiplique las veces q se ingresen en la potencia 
   	for(i=0;i<cuad;i++){
   		
   		mult*=ent;
   		
	   }
   	
   	
   	return mult;
   }

int main() {
	
	//xxxxx Actividad 1 xxxxx
	
	int res,num;
	
	//se inicia un do while para ingresar un numero entero 
	do{
	
	    printf("\n Ingrese un numero: ");
	    scanf("%d",&num);
	    res=primo(num);
	
      }while(num<0);
	
//se inicia un if para saber si el residuo es igual a 1 si lo es entonces el numero es primo sino no lo es	
if(res==1){
		
		    printf("\n El numero %d es primo", num);
	      }else
	        printf("\n No es un numero primo");
	
	
	//xxxxx Actividad 2 xxxxx
		
		int ent, cuad;
		
		// se inicia un do while para ingresar un numero entero y una potencia 
		do{
			printf("\n Ingresa un numero entero: ");
            scanf("%d",&ent);
		}while(ent<0);
		do{
			printf("\n Ingresa una potencia: ");
			scanf("%d",&cuad);
		}while(cuad<0);
		
		cuadrado(ent, cuad);
		
		//se imprime el resultado 
		printf("\n %d elevado a %d es %d",ent,cuad,cuadrado(ent,cuad));
		
		
  	
		
	return 0;
	//cambio
}
