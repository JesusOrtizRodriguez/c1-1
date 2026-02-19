/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
/*
Ejercicio 10:
Los sensores analógicos suelen presentar ruido. Definir una lista de 10 lecturas llamada LECTURAS_ADC. 
Crear un programa que calcule una nueva lista donde cada elemento sea el promedio de la lectura actual y las dos anteriores (esto se le conoce como filtro de media móvil). 
Para la primera posición, segunda y última posición de la nueva lista, dejar en 0.

Integrantes: [Jesús Ortiz Rodríguez, Andrea Orozco Carrillo, Daniel Utria Brooks, Nicol Moralez Díaz, Josué Gutiérrez Cantillo]
Compilador usado: OnlineGDB (C compiler).
*/
#include <stdio.h>

// Definición de los estados
typedef enum {S0, S1, S2, S3, S4} State;

int main() {
    State current_state = S0;
    int sequence[] = {1, 0, 1, 1, 0, 1, 1, 1}; // Entrada de ejemplo
    int n = sizeof(sequence) / sizeof(sequence[0]);
    int i;

    printf("Secuencia: ");
    for(i=0; i<n; i++) printf("%d ", sequence[i]);
    printf("\n\n");

    for (i = 0; i < n; i++) {
        int input = sequence[i];
        
        // Lógica de Transición de Estados
        switch (current_state) {
            case S0:
                current_state = (input == 1) ? S1 : S0;
                break;
            case S1:
                current_state = (input == 0) ? S2 : S1;
                break;
            case S2:
                current_state = (input == 1) ? S3 : S0;
                break;
            case S3:
                current_state = (input == 1) ? S4 : S2;
                break;
            case S4:
                current_state = (input == 1) ? S4 : S2; // Solapamiento
                break;
        }

        // Lógica de Salida (Moore: depende solo del estado actual)
        if (current_state == S4) {
            printf("Bit %d: -> Estado S4: Cerradura abierta\n", input);
        } 
    }

    return 0;
}

