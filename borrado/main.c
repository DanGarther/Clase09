#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"
#include "funciones2.h"
typedef struct{


    char nombre[50];
    int nota;
    int legajo;
    int estaVacio;//0 para ocupado 1 para vacio

}unAlumno;

int hardcode(unAlumno[], int);

int main()
{
 int cantidad = 5;
 unAlumno alumnos[cantidad];

  hardcode(alumnos, cantidad);
  mostrarUnAlumno(alumnos, cantidad);




    return 0;
}



int hardcode(unAlumno alumnos[], int cantidad){

int i;
char hardcodeNombre[5][50] = {'a', 'a', 'a', 'a', 'a'};
int hardcodeLegajo[5] = {1, 3, 5, 9, 88};
int hardcodeNotas[5] = {10, 2, 9, 4, 6};


    for(i = 0; i < cantidad; i++){

        alumnos[i].nombre = hardcodeNombre[i];
        alumnos[i].legajo = hardcodeLegajo[i];
        alumnos[i].nota = hardcodeNotas[i];



    }



    return 0;}


void mostrarUnAlumno(unAlumno alumnos[], int cantidad){
int i;

    for(i = 0; i < cantidad; i++){

    printf("\n%s", alumnos[i].legajo);
      printf("\t\t%d\n", alumnos[i].legajo);
      printf("\t\t%d", alumnos[i].nota);



    }

void mostrarTodosLosAlumnos


}
