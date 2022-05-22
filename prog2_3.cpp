/* 
Autor: Franciscomilan
Realizado: 24/03/2022
Escuela: Universidad uvm
Materia: Programacion estructurada
Profesor: Armando Cruz
Ciclo: 01/2022
Descripcion: Programa 3 del 2 parcial en C que pide las calificaciones de un alumno y sus faltas
para un grupo de 10 alumnos, el programa tiene las opciones:
0 para Salir
1 para Introducir datos del alumno (calificaciones y faltas)
2 para Imprimir
3 para Promedio del grupo 
4 para Cuentos aprobaron
5 para Porcentaje de asistencia de cada alumno 
para la materia programacion estructurada 
*/

//Librerias
#include<stdio.h>
#include<stdlib.h> 
//Definir maximo
#define MAX 10
//Propotipos
int menu();
float validarFlotantes(float inferior, float superior);
int validarEnteros(int inferior, int superior);
void llenar(float x[], int y[]);	
//Principal
int main() {
	float cal[MAX];
	int faltas[MAX];
	int opcion;
	do {
		opcion=menu();
		switch(opcion) {
			case 0: printf("\n -- Adios -- \n");
				break;
			case 1: llenar(cal, faltas);
				break;
			case 2: printf(" Entraste a la opcion 2\n");
				system("PAUSE");
			case 3: printf(" Entraste a la opcion 3\n");
				system("PAUSE");
			case 4: printf(" Entraste a la opcion 4\n");
				system("PAUSE");
			case 5: printf(" Entraste a la opcion 5\n");
				system("PAUSE");
		}
	}while(opcion!=0);
	return 0;
}
//Funcion menu
int menu() {
	int opcion;
	printf("\n --- Menu Principal --- \n");
	printf(" 0. Salir \n");
	printf(" 1. Introducir datos \n");
	printf(" 2. Imprimir \n ");
	printf(" 3. Promedio del grupo \n");
	printf(" 4. Cuantos aprobaron \n");
	printf(" 5. Porcentaje de asistencia \n");
	printf(" ------------------------ \n");
	printf(" \n Selecciona una opcion: ");
	opcion=validarEnteros(0,5);
	//Retorno
	return opcion;
}
//Funcion llenar
void llenar(float x[], int y[]) {
	printf("\n Introducir datos de los alumnos \n");
	for(int i=0;i<MAX;i++) {
		printf(" Alumno #%d ---------- \n",i);
		printf(" Calificacion: ");
		x[i]=validarFlotantes(0,10);
		printf(" Faltas: ");
		y[i]=validarEnteros(0,32);
	}
}
//Funcion validar flotantes
float validarFlotantes(float inferior, float superior) {
	float valor;
	do {
		scanf("%f",&valor);
		if (valor<inferior || valor>superior) {
			printf(" Dato invalido !! Debe de estar entre(%.2f-%.2f). Vuelva a introducirlo: \n", inferior, superior);
		}
	}while (valor<inferior || valor>superior);
	//Retorno
	return valor;
}
//Funcion validar enteros
int validarEnteros(int inferior, int superior) {
	int valor;
	do {
		scanf("%d",&valor);
		if (valor<inferior || valor>superior) {
			printf(" Dato invalido !! Debe de estar entre(%d-%d). Vuelva a introducirlo: \n", inferior, superior);
		}
	}while (valor<inferior || valor>superior);
	//Retorno
	return valor;
}


			