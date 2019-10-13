#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* Autor: Luis Eduardo Cortez Gonzalez
   Fecha: 12/10/2019
   Grupo: 008
   Horario: Sabado 9am-11am
   Matricula: 1546624 
 */

int main() {
	
	//xxxxx ACTIVIDAD 1 xxxxx
	
	//se declaran las variables
	char texto[' '];
    int i, n;
    int pali = 1;
    
    //Se pregunta cual es la cadena a ingresar
    printf("\n Ingrese la cadena de texto: ");
    fflush(stdin);
    gets(texto);
    //se cuenta cuantos caracteres ingreso
    n=strlen(texto)-1;
    
    //para saber si es o no un palindromo
    for(i=0; i<n; i++, n--) {
        
        if (*(texto+i) != *(texto+n)) {
            pali = 0;
            break;
        }
    }
    if (pali)
        printf("\n Es un palindromo \n");
    else
        printf("\n No es un palindromo \n");
        
        
   //xxxxx ACTIVIDAD 2 xxxxx
   
   //se declaran las variables
   char texto1[' '];
   char alfa[26]={"abcdefghijklmnopqrstuvwxyz"};
	int cont[26]={0};
   int j=0,l,k;
   
   //se ingresa la cadena
   printf("\n Ingrese la cadena de caracteres: ");
  
   gets(texto1);
   
   j=strlen(texto1);
   //se va a hacer un contador para ver cuantas letras se repiten y se guarden en una variable
   for(l=0;l<strlen(texto1);l++){
   	
   	for(k=0;k<26;k++){
   		if(tolower(texto1[l])==alfa[k]){
		   
   		
   		cont[k]++;
   		
	   }
   }
}
	// se imprima las veces que se repite una letra
	for(l=0;l<26;l++){
		
			
	printf("\n las letras %c se repiten: %d",alfa[l],cont[l]);
}
	return 0;
	//cambio
}
