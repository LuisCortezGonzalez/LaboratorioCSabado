#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* Autor: Luis Eduardo Cortez Gonzalez
   Fecha: 24/10/2019
   Grupo: 008
   Horario: sabado 9am-11am
   Matricula: 1546624 */
   
 //se hace una estructura para el estudiante  
struct estudiante{
	
	char nombre[30];
	char sexo[30];
	int edad;
	int cal[5];
	float prom;	
};

//se hace una estructura para los pandas
struct zoo{
	
	char nombre[30];
	int peso[30];
	int sexo;
	int edad;
	
};   


	

int main() {
	
//xxxxx ACTIVIDAD 1 xxxxx

//se declaran las variables
struct estudiante est[' '];
int i,j,proma=0,mayor=0,alm,sum=0;

//se ingresa el numero de alumnos
printf("\n ingresa el numero de alumnos: ");
fflush(stdin);
scanf("%d",&alm);

//se inicia un ciclo para ingresar los datos del alumno 
for(i=0;i<alm;i++){
	
	printf("\n Nombre del alumno %d: ",i+1);
	fflush(stdin);
	gets(est[i].nombre);	
	printf("\n Sexo: ");
	fflush(stdin);
	gets(est[i].sexo);
	printf("\n Edad: ");
	fflush(stdin);
	scanf("%d",&est[i].edad);
	//se inicia un ciclo para ingresar las calificaciones
	for(j=0;j<5;j++){
		
		printf("\n Calificacion %d: ",j+1);
		scanf("%d",&est[j].cal);
		sum+=est[j].cal;
		
	}
	//se hacen las operaciones para saber el promedio 
    est[j].prom=sum/5;
	proma=est[j].prom;
	//se hace un if para saber cual es el alumno con mayor promedio
	if(est[j].prom>proma){
		
		mayor=i;
			proma=est[j].prom;
	}
}

printf("\n El alumno con mayor promedio es: %s ",est[mayor].nombre);
	

//xxxxx ACTIVIDAD 2 xxxxx

//se declaran las variables
struct zoo p[' '];
int num,k,datos,edad,cont1=0,l;

//se inician los ciclos para ingresar cuantos pandas ingresara
do{

   printf("\n Numero de Pandas: ");
   scanf("%d",&num);
}while(num<0);

//se inicia un ciclo para ingresar la informacion de cada panda
   for(k=0;k<num;k++){
   	
   	do{
	   
   	printf("\n Nombre del panda %d: ",k+1);
   	fflush(stdin);
   	gets(p[k].nombre);
   	
   	do{
	   
   	printf("\n Que edad tiene: ");
   	scanf("%d",&p[k].edad);
   }while(p[k].edad<0);
   
   do{
   
   	printf("\n Peso: ");
   	scanf("%d",&p[k].peso);
   	
	}while(p[k].peso<0);
	
	
	do{
	
	printf("\n Sexo (macho-1/ hembra-2): ");
	fflush(stdin);
   	scanf("%d",&p[k].sexo);
   	
   }while(p[k].sexo!=1 && p[k].sexo!=2);
   
   //es para saber si la informacion es correcta
   do{
   	
   	printf("\n Los datos son correctos(1-si/ 2-no)");
   	scanf("%d",&datos);
   }while(datos!=1 && datos!=2);
    
}while(datos==2);

}
   	
//se inicia un ciclo para saber si el panda puede tener bebes 
  for(k=0;k<num;k++){
  	
  	if(p[k].edad>5 && p[k].sexo==2){
  		
  		printf("\n %s de edad %d puede tener bebes",p[k].nombre,p[k].edad);
	  }else
	  printf("\n %s de edad %d es macho o no puede tener bebes la hembra",p[k].nombre,p[k].edad);
	  
	  
  }
	
	return 0;
	//cambio
}
