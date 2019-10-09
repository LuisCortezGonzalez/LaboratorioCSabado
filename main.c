#include <stdio.h>
#include <stdlib.h>

/* Autor: Luis Eduardo Cortez Gonzalez
   Fecha: 08/10/2019
   Grupo: 008
   Horario: Sabado 9am-11am
   Matricula: 1546624 */

int main() {
	
	//xxxxx ACTIVIDAD 1 xxxxx
	
	//se declara el arreglo bidimencional
		int ventasEmpleadoOficinaEdificio[6][10][2];
	
	//se establece un valor para el elemento [3][7][2]
	ventasEmpleadoOficinaEdificio[3][7][2]=4234;
	
	//se imprime el valor del elemento
	printf("\n  El empleado numero 3 de la oficina numero 7 del edificio numero 2 ha vendido:  %d \n\n",ventasEmpleadoOficinaEdificio[3][7][2]);
	
	//Se contestan unas preguntas sobre el arreglo
	
	//a) ¿Cuantos elementos componen el array multidimensional?
	//R: 120 elementos.
	//b) ¿Qué ocurre si intentamos mostrar por pantalla un valor con un índice que noestá definido para ese array multidimensional?
	//R: sale un numero muy grande, basura.
	
	//xxxxx ACTIVIDAD 2 xxxxx
	
	//Se modifica el valor +10 para el mismo elemento de la act 1
	printf("\n  El empleado numero 3 de la oficina numero 7 del edificio numero 2 ha vendido:  %d \n\n",ventasEmpleadoOficinaEdificio[3][7][2]+10);
	
	system("pause");
	
	return 0;
	//cambio
}
