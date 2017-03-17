#include <stdio.h>
#include <stdlib.h>
void dis();

int nestudiantes;
int ndiscapacidad;

struct Notas{
    float nota1;
    float nota2;
    float nota3;
};

struct Estudiante{
    struct Notas notasEstudiante;
    char nombre[30];
    char discapacidad[30]="Ninguna";
}estudiantes[200];

int main(){
    printf("Ingrese numero de personas: ");
    scanf("%d", &nestudiantes);
    dis();
    return 0;
}

void dis(){
    for(int i=0; i<nestudiantes; i++){
        printf("Ingrese Nombre Persona [%d]: ", i);
        scanf("%s", &estudiantes[i].nombre);
        printf("Tiene alguna discapacidad?: ");
        scanf("%d", &ndiscapacidad);
        switch(ndiscapacidad){
            case 1: printf("Que tipo de discapacidad tiene?: ");
            scanf("%s", &estudiantes[i].discapacidad);
            system("cls");
            printf("Dato resgistrado\n");
            break;
            case 0: system("cls");
            printf("Dato resgistrado\n");

            break;
            default: system("cls");
            printf("No es valida, intente de nuevo.\n");
            dis();
        }
    }
    for(int i=0; i<nestudiantes; i++){
        printf("Nombre: %s | Discapacidad: %s\n", estudiantes[i].nombre, estudiantes[i].discapacidad);
    }
}

