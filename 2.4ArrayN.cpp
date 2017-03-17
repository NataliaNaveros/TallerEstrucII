#include <stdio.h>
#include <stdlib.h>

void llenarArreglo(int *,int);
void imprimirArreglo(int *, int);
void valorMenor(int *, int);

int main(){
    int nnum;
    printf("\nDigite tamaño del vector: ");
    scanf("%d",&nnum);

    int arreglo[nnum],*parreglo=arreglo;

    llenarArreglo(parreglo,nnum);
    imprimirArreglo(parreglo,nnum);
    valorMenor(parreglo,nnum);
    printf("\n\n");
    system("pause");
    return 0;
}

void llenarArreglo(int *p,int nnum){
    for(int i=0;i<nnum;i++){
        printf("Ingrese valor %d: ",i+1);
        scanf("%d",&(*(p+i)));
    }
}

void imprimirArreglo(int *p, int nnum){
    printf("\nLos valores del Vector y la Direccion de cada uno es: \n");
    int aux=0,*direccion;
    for (int i=0;i<nnum;i++){
        printf("\nValor (%i): %d en Pocision %p\n",i+1,*(p+i),(p+i));
        if(*(p+i)>aux){
            aux=*(p+i);
            direccion=(p+i);
        }
    }
}

void valorMenor (int *p,int nnum){
    int menor=*(p+0),*d;
    for (int i=0; i<nnum; i++){
        if (*(p+i)< menor){
        menor=*(p+i);d=(p+i);
        }
    }
    printf("\nEl Valor menor es %d y esta en la pocision %p.",menor,d);
}
