/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
/*
Ejercicio 9:
Simular un detector de secuencia para una cerradura electrónica (simulación de una máquina de estados). El programa debe recibir una lista de bits uno por uno que ingresa el usuario. 
Si detecta que los últimos bits ingresados tienen la secuencia específica 1011, el mensaje debe ser "Cerradura abierta". Si el bit ingresado rompe la secuencia, no debe mostrar nada.

Integrantes: [Jesús Ortiz Rodríguez, Andrea Orozco Carrillo, Daniel Utria Brooks, Nicol Moralez Díaz, Josué Gutiérrez Cantillo]
Compilador usado: OnlineGDB (C compiler).
*/

#include <stdio.h>

#define WINDOW_SIZE 10

float moving_average(float new_sample) {
    static float buffer[WINDOW_SIZE] = {0.0};
    static int index = 0;
    static float sum = 0.0;
    static int count = 0;

    // Restar el valor antiguo que será reemplazado
    sum -= buffer[index];
    // Almacenar nuevo valor
    buffer[index] = new_sample;
    // Sumar el nuevo valor
    sum += buffer[index];

    // Avanzar índice
    index = (index + 1) % WINDOW_SIZE;

    // Calcular promedio (manejar el llenado inicial del buffer)
    if (count < WINDOW_SIZE) {
        count++;
    }
    return sum / count;
}

int main() {
    float data[] = {0, 0, 10.5, 12.0, 11.5, 10.0, 9.0, 10.0, 11.0, 12.0, 13.0, 0};
    int n = sizeof(data) / sizeof(data[0]);

    for (int i = 0; i < n; i++) {
        printf("LecturasADC: %.2f, filtrado: %.2f\n", data[i], moving_average(data[i]));
    }
    return 0;
}

