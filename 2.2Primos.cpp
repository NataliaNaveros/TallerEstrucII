#include <stdio.h>
#include <stdlib.h>

void primos(int *);
void pedirnumero(int *);

int main(){
    int n, *pn=&n;
    pedirnumero(pn);
    primos(pn);
    printf("\n\n");
    system("pause");
    return 0;
}

void pedirnumero (int *num){
    printf("\nDigite numero a calcular: ");
    scanf("%d",&(*num));
    printf("\nValor ingresado %d, esta almacenado en la pocision de Memoria %p y ",*num,num);
}

void primos(int *pn){
    int a=0,i;
 		for(i=1;i<(*(pn+1));i++){
		     if(*pn%i==0){
                a++;
		     }
        }
 		if(a!=2){
            printf("No es Primo\n");
        }else{
            printf("Si es Primo\n");
        }
}
