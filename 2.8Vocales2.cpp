#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void pedirDatos(char *);
void mostrasDatos(int *,char *);

int main(){

    char nombre[30], *p_nombre=nombre;
    int nletras, *p_nletras=&nletras;
    pedirDatos(p_nombre);
    *p_nletras=strlen(p_nombre);
    mostrasDatos(p_nletras,p_nombre);
    printf("\n\n");
    system("pause");
}
void pedirDatos(char *p_nombre){
    printf("\t\t\nREGISTRO DE NOMBRE PARA VALIDAR CANTIDAD DE VOCALES\n\n");
    printf("\nDigite Nombre: ");
    scanf("%s",p_nombre);
}

void mostrasDatos(int *p_nletras,char *p_nombre){
    int n_vocales=0;
    int n_a=0,n_e=0,n_i=0,n_o=0,n_u=0;

    for(int i=0;i<*p_nletras;i++){
        if(*(p_nombre+i)=='a' || *(p_nombre+i)=='A' ){

            n_vocales++;n_a++;
        }else{
                if(*(p_nombre+i)=='e' || *(p_nombre+i)=='E' ){
                    n_vocales++;n_e++;
                }else{
                        if(*(p_nombre+i)=='i' || *(p_nombre+i)=='I'){
                            n_vocales++;n_i++;
                        }else{
                                if(*(p_nombre+i)=='o' || *(p_nombre+i)=='O'){
                                    n_vocales++;n_o++;
                                }else{
                                        if(*(p_nombre+i)=='u' || *(p_nombre+i)=='U'){
                                            n_vocales++;n_u++;
                                        }
                                    }
                            }
                    }
            }
    }

    if(n_vocales==0){
        printf("\nEl nombre ingresado no posee vocales.\n");
    }else{
            printf("\nEl nombre ingresado tiene %d vocales ",n_vocales);
            printf("\na= %d",n_a);
            printf("\ne= %d",n_e);
            printf("\ni= %d",n_i);
            printf("\no= %d",n_o);
            printf("\nu= %d",n_u);
    }
}
