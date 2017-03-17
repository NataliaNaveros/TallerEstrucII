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
}estudiantes[200];

int main(){
    int nestudiantes;
    float suma;
    printf("Ingrese numero de estudiantes: ");
    scanf("%d", &nestudiantes);
    for(int i=0; i<nestudiantes; i++){
        printf("Ingrese nombre del estudiante: ");
        scanf("%s", &estudiantes[i].nombre);
        printf("Ingrese Nota 1: ");
        scanf("%f", &estudiantes[i].notasEstudiante.nota1);
        printf("Ingrese Nota 2: ");
        scanf("%f", &estudiantes[i].notasEstudiante.nota2);
        printf("Ingrese Nota 3: ");
        scanf("%f", &estudiantes[i].notasEstudiante.nota3);
        system("cls");
    }
    for(int i=0; i<nestudiantes; i++){
        suma = (estudiantes[i].notasEstudiante.nota1 + estudiantes[i].notasEstudiante.nota2 + estudiantes[i].notasEstudiante.nota3)/3;
        printf("Nombre: %s, Promedio: %.1f\n", estudiantes[i].nombre, suma);
    }

    float mayor, menor;
    int posicionmayor = 0, posicionmenor = 0;
    mayor = suma;
    menor = suma;
    for(int i=0; i<nestudiantes; i++){
        suma = (estudiantes[i].notasEstudiante.nota1 + estudiantes[i].notasEstudiante.nota2 + estudiantes[i].notasEstudiante.nota3)/3;
        if (i == 0){
            mayor = suma;
            menor = suma;
        }
        if (suma > mayor){
            mayor=suma;
            posicionmayor = i;
        }
        if (suma < menor){
            menor=suma;
            posicionmenor = i;
        }
    }
    printf("\nEl promedio mayor es: %.1f por el estudiante: %s\n", mayor, estudiantes[posicionmayor].nombre);
    printf("Ell promedio menor es: %.1f por el estudiante: %s\n", menor, estudiantes[posicionmenor].nombre);
    return 0;
}

