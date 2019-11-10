#include <stdio.h>
#include <stdlib.h>

/* Autor: Luis Eduardo Cortez Gonzalez
   Fecha: 09/11/19
   Grupo: 008
   Horario: Sabado 9am-11am
   Matricula: 1546624 */

//estructura para guardar nombre y fecha de la foto con un apuntador 
struct picture_info{
	
	char name[30];
	int date_time;
	
}pictures[4],*pictures_apunt[4];

struct coordinates{
	
	int latitude;
	int longitude;
	
}places[4],*places_long[4],*places_lat[4],*arre;


int main(int argc, char *argv[]) {
	
//xxxxx ACTIVIDAD 1 xxxxx
	//se declaran variables
	int	pic,i;
	
	//se pregunta cuantas fotos ingresara
	printf("\n Cuantas fotos ingresara: ");
	scanf("%d",&pic);
	
	//se utiliza un ciclo for para ingresar el nombre y la fecha de cada foto y las guarde en el struct 
	for(i=0;i<pic;i++){
		
		printf("\n Nombre de la foto: ");
		fflush(stdin);
		gets(pictures[i].name);
		printf("\n Ingrese la fecha(dia/mes/year sin /): ");
		scanf("%d",&pictures[i].date_time);
		
	}
	
	//se utliza un for para decir q el apuntador tenga los datos del struct
	for(i=0;i<pic;i++){
		
		pictures_apunt[i]=&pictures[i];
		
	}
	
	printf("\n\n\t Datos de la foto\n ");
	
	//se utiliza un for para imprimir cada foto con su fecha
	for(i=0;i<pic;i++){
		
		printf("\n La foto se llama %s tomada el %d ",pictures_apunt[i]->name,pictures_apunt[i]->date_time);
		
		
	}
	
	printf("\n\n");
	
//xxxxx ACTIVIDAD 2 xxxxx

//se ingresan las variables
int k,j;

//se inica un for para ingresar la longitud y latitud
for(k=0;k<4;k++){
	
	printf("\n Ingrese la latitud %d:",k+1);
	scanf("%d",&places[k].latitude);
	printf("\n Ingrese la longitud %d:",k+1);
	scanf("%d",&places[k].longitude);
	
}

for(k=0;k<4;k++){
	
	places_lat[k]=&places[k];
	
}

//se inica un for para que cada puntero de la tabla places_lat[k] apunte a una struct en places
//se ordenara acendentemente la latitud 
for(k=0;k<4;k++){
	
	for(j=k;j<4;j++){
		
		if(places_lat[k]->latitude>places_lat[j]->latitude){
			
			arre=places_lat[k];
			places_lat[k]=places_lat[j];
			places_lat[j]=arre;
			
		}
	}
}

for(k=0;k<4;k++){
	
	places_long[k]=&places[k];
	
}

//se inica un for para que cada puntero de la tabla places_long[k] apunte a una struct en places
//se ordenara acendentemente la longitud
for(k=0;k<4;k++){
	
	for(j=k;j<4;j++){
		
		if(places_long[k]->longitude>places_long[j]->longitude){
			
			arre=places_long[k];
			places_long[k]=places_long[j];
			places_long[j]=arre;
			
		}
	}
}

//impresion de las tablas una con los valores ingresados normal la segunda la latitud ordenada crecientemente y la tercera la longitud ordenada crecientemente
printf("\n\n\t Tabla de los valores ingresados de latitud y longitud\n");

 for(k=0;k<4;k++){
	
	printf("\n La latitud es: %d ",places[k].latitude);
	printf("\n La longitud es: %d ",places[k].longitude);
	
}	

printf("\n\n\t Tabla con latitud ordenada crecientemente\n");

for(k=0;k<4;k++){
	
	printf("\n La latitud es: %d ",places_lat[k]->latitude);
	printf("\n La longitud es: %d ",places_lat[k]->longitude);
	
}

printf("\n\n\t Tabla con longitud ordenada crecientemente\n");

for(k=0;k<4;k++){
	
	printf("\n La latitud es: %d ",places_long[k]->latitude);
	printf("\n La longitud es: %d ",places_long[k]->longitude);
	
}


	return 0;
	//cambio
}
