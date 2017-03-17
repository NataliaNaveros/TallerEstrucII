#include <stdio.h>
#include <stdlib.h>

struct Notas{
    float nota1;
};

struct Estudiante{
    struct Notas notasEstudiante;
    char nombre[30];
    int edad;
    int grado;
}estudiante_1, estudiante_2, estudiante_3;

int main(){
    // ESTUDIANTE 1
    printf("Ingrese nombre estudiante1: ");
    scanf("%s", &estudiante_1.nombre);
    printf("\nIngrese edad estudiante1: ");
    scanf("%d", &estudiante_1.edad);
    printf("\nIngrese grado estudiante1: ");
    scanf("%d", &estudiante_1.grado);
    printf("\nIngrese promedio estudiante1: ");
    scanf("%f", &estudiante_1.notasEstudiante.nota1);
    system("cls");

    // ESTUDIANTE 2
    printf("Ingrese nombre estudiante2: ");
    scanf("%s", &estudiante_2.nombre);
    printf("\nIngrese edad estudiante2: ");
    scanf("%d", &estudiante_2.edad);
    printf("\nIngrese grado estudiante2: ");
    scanf("%d", &estudiante_2.grado);
    printf("\nIngrese promedio estudiante2: ");
    scanf("%f", &estudiante_2.notasEstudiante.nota1);
    system("cls");

    // ESTUDIANTE 3
    printf("Ingrese nombre estudiante3: ");
    scanf("%s", &estudiante_3.nombre);
    printf("\nIngrese edad estudiante3: ");
    scanf("%d", &estudiante_3.edad);
    printf("\nIngrese grado estudiante3: ");
    scanf("%d", &estudiante_3.grado);
    printf("\nIngrese promedio estudiante3: ");
    scanf("%f", &estudiante_3.notasEstudiante.nota1);
    system("cls");

    if (estudiante_1.notasEstudiante.nota1 > estudiante_2.notasEstudiante.nota1){
        if (estudiante_1.notasEstudiante.nota1 > estudiante_3.notasEstudiante.nota1){
            printf("\nDe los 3 estudiantes ingresados, %s del grado %d (EDAD: %d) tiene el mayor promedio %f", estudiante_1.nombre, estudiante_1.grado, estudiante_1.edad, estudiante_1.notasEstudiante.nota1);
        }
        else{
            printf("\nDe los 3 estudiantes ingresados, %s del grado %d (EDAD: %d) tiene el mayor promedio %f", estudiante_3.nombre, estudiante_3.grado, estudiante_3.edad, estudiante_3.notasEstudiante.nota1);
        }
    }
    else {
        printf("\nDe los 3 estudiantes ingresados, %s del grado %d (EDAD: %d) tiene el mayor promedio %f", estudiante_2.nombre, estudiante_2.grado, estudiante_2.edad, estudiante_2.notasEstudiante.nota1);
    }
    return 0;
}
