#include <stdio.h>
#include <stdlib.h>

void parimpar(int *);
void pedirnumero(int *);

int main()
{	int n, *pn=&n;
    pedirnumero(pn);
    parimpar(pn);
    printf("\n\n");
    system("pause");
    return 0;
}

void pedirnumero (int *num)
{
    printf("\nDigine numero a calcular: ");
    scanf("%d",&(*num));

    printf("Valor %d almacenado en la pocision de Memoria %p\n",*num,num);
}

void parimpar (int *pn)//FUNCION PARA CALCULO PAR E IMPAR
{
    if (*pn%2!=0){
        printf("\nEl valor ingresado es Impar.");
    }else{
        printf("\nEl valor ingresado es Par.");
        }
}
