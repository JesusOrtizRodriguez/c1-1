/******************************************************************************
OnlineGDB
6).Leer un número entero en la variable VALOR. Utilizar operadores de bits
(bitwise) para determinar si el número es par o impar (verificando el bit 
menos significativo) y mostrar el resultado. No está permitido usar el 
operador de módulo (%).
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
    int VALOR=98;   
    int resultado=VALOR & 1;
    if(resultado) {
        printf("el numero %d es impar", VALOR);
    } else {
        printf("el numero %d es par", VALOR);
    }
    return 0;
}