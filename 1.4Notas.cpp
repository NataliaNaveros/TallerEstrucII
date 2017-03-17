#include <stdio.h>
#include <stdlib.h>

struct Notas{
    float nota1;
    float nota2;
    float nota3;
};

struct Estudiante{
    struct Notas notasEstudiante;
    char nombre[30];
}estudiante_1;

int main(){
    printf("Ingrese Nombre Estudiante: ");
    scanf("%s", &estudiante_1.nombre);
    printf("Ingrese Nota 1: ");
    scanf("%f", &estudiante_1.notasEstudiante.nota1);
    printf("Ingrese Nota 2: ");
    scanf("%f", &estudiante_1.notasEstudiante.nota2);
    printf("Ingrese Nota 3: ");
    scanf("%f", &estudiante_1.notasEstudiante.nota3);
    float suma;
    suma = (estudiante_1.notasEstudiante.nota1 + estudiante_1.notasEstudiante.nota2 + estudiante_1.notasEstudiante.nota3)/3;
    printf("El Promedio de %s es: %.1f", estudiante_1.nombre, suma);
    return 0;
}

