#include <stdio.h>
#include <stdlib.h>

void llenarArreglo(int *,int);
void menor_mayor(int *, int);

int main(){
    int num;
    printf("\nDigite tamaño del vector: ");
    scanf("%d",&num);

    int arreglo[num],*parreglo=arreglo;

    llenarArreglo(parreglo,num);
    menor_mayor(parreglo,num);
    printf("\n\n");
    system("pause");
    return 0;
}

void llenarArreglo(int *p,int num){

    for(int i=0;i<num;i++)
    {
        printf("Ingrese valor %d: ",i+1);
        scanf("%d",&(*(p+i)));
    }
}

void menor_mayor(int *p, int num){
    int aux;
    for(int i=0;i<num;i++){
        for(int j=i+1;j<num;j++){
            if(*(p+j)<(*(p+i))){
                aux=*(p+j);
                *(p+j)=*(p+i);
                *(p+i)=*(p+j);
                *(p+i)=aux;
            }
        }
    }for (int i=0;i<num;i++){
        printf("\nValor (%i): %d\n",i+1,*(p+i));
    }
}
