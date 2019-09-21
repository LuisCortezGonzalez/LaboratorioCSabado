#include <stdio.h>
#include <stdlib.h>

/* Autor: Luis Eduardo Cortez Gonzalez
   Fecha: 21/09/2019
   Grupo: 008
   Horario: Sabado 9am-11am
   Matricula: 1546624*/

/* xxxxx ACTIVIDAD 1 */
int n,calf,suma=0;
int prom;
int main() {
	
	// aqui se utuliza un for para que puedas ingresar 10 calificaciones 
	for(n=1;n<=10;n++){
		
		printf("\n\n Ingrese la calificacion: ");
		scanf("%d",&calf);
		
		//aqui para sumar las 10 calificaciones 
		suma += calf;
	}
	
	   //aqui se saca el promedio luego se imprime
	   prom = suma/10;
	   
	   printf("\n\n\t El promedio es de: %d ",prom);
	   
	   //aqui se utuliza un if-else para saber si es mayaro a 7 y impirimir APROBADO si no REPROBADO
    if(prom>7)
    
       printf("\n\n\t APROBADO \n");
       
    else 
	
	printf("\n\n\t REPROBADO \n");
	
	
/* xxxxx ACTIVIDAD 2 */

int base, exp, n, res=1;

    // aqui se piden los datos de base y el exponente
    printf("\n Ingrese el numero base: ");
    scanf("%d",&base);
    printf("\n Ingrese el exponente: ");
    scanf("%d",&exp);
    
    // aqui se utiliza un for para que el numero base se pueda repetir las veces del exponente 
    for(n=1;n<=exp;n++){
    	
    	res = base*res;
    	
	}
	 
	//aqui se imprime el resultado de multiplicar un numero por un exponente 
	printf("\n\n\t RESULTADO \n\n ");
	printf("\n el resultado es de: %d",res);
	
	
	
	
	return 0;
	//cambio
}
