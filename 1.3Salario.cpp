#include <stdio.h>
#include <stdlib.h>

struct Trabajadores{
    char nombre[30];
    int edad;
    long int salario;
}trabajador[200];

int main(){
    int trabajadores;
    printf("Ingrese el numero de trabajadores: ");
    scanf("%d", &trabajadores);
    for(int i=0; i<trabajadores; i++){
        printf("Ingrese nombre del trabajador: ");
        scanf("%s", &trabajador[i].nombre);
        printf("Ingrese edad del trabajador: ");
        scanf("%d", &trabajador[i].edad);
        printf("Inggrese el salario del trabajador: ");
        scanf("%ld", &trabajador[i].salario);
        system("cls");
    }
    for(int i=0; i<trabajadores; i++){
        printf("Nombre: %s, Edad: %d, Salario: %d\n", trabajador[i].nombre, trabajador[i].edad, trabajador[i].salario);
    }
    return 0;
}

