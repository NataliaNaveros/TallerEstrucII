#include <stdio.h>
#include <stdlib.h>
#define darreglo 10
void llenarArreglo(int *);
void imprimirArreglo(int *);

int main(){
    int arreglo[darreglo],*parreglo=arreglo;
    llenarArreglo(parreglo);
    imprimirArreglo(parreglo);
    printf("\n\n");
    system("pause");
    return 0;
}

void llenarArreglo(int*p){
    for(int i=0;i<darreglo;i++){
        printf("Ingrese valor %d: ",i+1);
        scanf("%d",&(*(p+i)));
    }
}

void imprimirArreglo(int *p){
    printf("\nLos valores que son Pares del Vector y la direccion de cada uno es: \n");
    for (int i=0;i<darreglo;i++){
        if (*(p+i)%2==0){
            printf("%d Es PAR y con pocision de memoria %p\n",*(p+i),(p+i));*(p+i);
        }
    }
}
