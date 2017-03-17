#include <stdio.h>
#include <stdlib.h>

void llenarArreglo(int *,int);
void busqueda(int *, int);

int main(){
    int num;
    printf("\nDigite tamaño del vector: ");
    scanf("%d",&num);

    int arreglo[num],*parreglo=arreglo;

    llenarArreglo(parreglo,num);
    busqueda(parreglo,num);
    printf("\n\n");
    system("pause");
    return 0;
}

void llenarArreglo(int *p,int num){
    for(int i=0;i<num;i++){
        printf("Ingrese valor %d: ",i+1);
        scanf("%d",&(*(p+i)));
    }
}

void busqueda(int *p, int num){
    int busq;
    int n=0;
    do{
    printf("\nDigite Valor a Colsultar: ");
    scanf("%d",&busq);

    for(int i=0;i<num;i++){
        if(*(p+i)==busq){
            printf("\nEl Valor buscado %d esta en la pocision %p\n",*(p+i),(p+i));n++;
        }
    }
    if(n==0){
        printf("\nEl valor ingresado no esta en el Vector\n");
    }else{
        n=1;
        }
    }while(n!=1);
}
