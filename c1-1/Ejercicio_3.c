/******************************************************************************
OnlineGDB
3).Crear un programa pida al usuario un número entero positivo y almacenarlo 
en la variable NUMERO. Usando NUMERO como límite, aplicar la Criba de 
Eratóstenes e imprimir en pantalla todos los números menores a 
NUMERO que son primos.
Integrantes:
Andrea Orozco.
Jesús Ortiz.
Daniel Utria.
Nicol Morales.
Josue Gutierrez.
Compilador usado: OnlineGDB (C Compiler).
*******************************************************************************/
#include <stdio.h>

int main() {
    int NUMERO;
    printf("ingrese un numero entero positivo:");
    scanf("%d", &NUMERO);
    if(NUMERO<=1) {
        printf("no existen numeros primos menores que %d ", NUMERO);
        return 0;
    }
    int primos [NUMERO];
    for(int i=0; i<NUMERO; i++) {
        primos[i]=1;
    }
    primos[0]=0;
    primos[1]=0;
    for(int i=2; i<NUMERO; i++) {
        if(primos[i]== 1){
            for(int j=i*2; j<NUMERO; j=j+i){
                 primos[j]=0;
            }
        }
    }
    printf("los numero menores que %d son:\n", NUMERO);
    for(int i=2; i<NUMERO; i++){
        if(primos[i]==1) {
            printf("%d ",i);
        }
    }
    return 0;
}
