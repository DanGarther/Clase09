#include <stdio.h>
#include <stdlib.h>
#include "biblioteca.h"

typedef struct
{
    char nombre[50];
    int nota;
    int legajo;
    int estaVacio;//0 para ocupado 1 para vacio

}unAlumno;

//int mostrarAlumnos(unAlumno[], int);
int ingresarAlumnos(unAlumno[], int);
void mostrarTodo(unAlumno[], int);
int lugarLibre(unAlumno[], int);
//int dameElInidiceLibre(unAlumno[], int);

int main()
{
    int cantidadDeAlumnos = 5;
    unAlumno listadoDeAlumnos[cantidadDeAlumnos];

    /*int indice;

    indice=dameElInidiceLibre(listadoDeAlumnos, cantidadDeAlumnos);

    if(indice!=1){

        listadoDeAlumnos[indice] = nuevoAlumno;
    }
    else
    {
        printf("No hay lugar libre");
    }*/



   ingresarAlumnos(listadoDeAlumnos, cantidadDeAlumnos);
    lugarLibre(listadoDeAlumnos, cantidadDeAlumnos);
  //  mostrarAlumnos(listadoDeAlumnos, cantidadDeAlumnos);



    return 0;
}


int ingresarAlumnos(unAlumno listado[], int cantidad){
int i;

for(i=0; i<cantidad; i++){

   printf("Nombre: ");
   scanf("%s", listado[i].nombre);
   printf("Legajo: ");
   scanf("%d", &listado[i].legajo);
   printf("Nota: ");
   scanf("%d", &listado[i].nota);
   listado[i].estaVacio = 1;


}



return 0;
}

void mostrarTodo(unAlumno alumnos[], int cantidad){

int i;

    for(i = 0; i < cantidad; i++){

        printf("Nombre: %s     Legajo: %d    Nota: %d\n",alumnos[i].nombre,alumnos[i].legajo,alumnos[i].nota);



    }

    }


int lugarLibre(unAlumno alumnos[], int cantidad){
int i;

for(i=0; i<cantidad; i++){



   if(alumnos[i].estaVacio==1){

    mostrarTodo(alumnos, cantidad);

   }

   else{

    printf("No hay alumnos en clase.\n");
   }


}
return 0;

}
/*int dameElInidiceLibre(unAlumno alumnos[], int cantidad){

int i;
int lugar;

for(i=0; i<cantidad; i++){


}


}


int mostrarAlumnos(unAlumno listado[], int cantidad){
int i;
int tieneAlumnos=0;

for(i=0; i<cantidad; i++){

    if(listado[i].estaVacio==0){

        printf("%d", listado[i].nota);

    }

    if(tieneAlumnos==0){

        printf("No hay alumnos para mostar \n");
    }


}



return 0;
}

*/
