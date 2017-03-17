#include <stdio.h>
#include <stdlib.h>

struct Competidor{
    char nombre[30];
    char club[30];
    int edad;
}competidor_1;

int main(){
    printf("Ingrese nombre competidor: ");
    scanf("%s", &competidor_1.nombre);
    printf("\nIngrese club: ");
    scanf("%s", &competidor_1.club);
    printf("\nIngrese edad competidor: ");
    scanf("%d", &competidor_1.edad);
    if (competidor_1.edad <= 15){
        printf("\n\nNombre: %s | Club: %s | Edad: %d | Categoria: Infantil", competidor_1.nombre, competidor_1.club, competidor_1.edad);
    }
    if (competidor_1.edad > 15 && competidor_1.edad <= 30){
        printf("\n\nNombre: %s | Club: %s | Edad: %d | Categoria: Joven", competidor_1.nombre, competidor_1.club, competidor_1.edad);
    }
    if (competidor_1.edad > 30){
        printf("\n\nNombre: %s | Club: %s | Edad: %d | Categoria: Mayor", competidor_1.nombre, competidor_1.club, competidor_1.edad);
    }
    return 0;
}

