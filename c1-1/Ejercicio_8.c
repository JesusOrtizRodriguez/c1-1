/*
Ejercicio 8:
Crear una función que reciba tres variables booleanas (A, B, C) y retorne el resultado de la siguiente expresión lógica: 
"F = (A · B) + C̅" El resultado debe mostrarse como una pequeña tabla de verdad en la consola para todas las combinaciones posibles de las entradas.

Integrantes: [Jesús Ortiz Rodríguez, Andrea Orozco Carrillo, Daniel Utria Brooks, Nicol Morales Díaz, Josue Gutierrez Cantillo]
Compilador usado: OnlineGDB (C Compiler).
*/

#include <stdio.h>

int calcularF(int A, int B, int C) {
    return (A && B) || !C;
}

int main() {
    int A, B, C;

    printf("A B C | F\n");

    for (A = 0; A <= 1; A++) {
        for (B = 0; B <= 1; B++) {
            for (C = 0; C <= 1; C++) {
                int F = calcularF(A, B, C);
                printf("%d %d %d | %d\n", A, B, C, F);
            }
        }
    }

    return 0;
}


