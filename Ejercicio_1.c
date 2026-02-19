/*
Ejercicio 1:
Enunciado: Una variable llamada NUMERO contiene un entero de 4 dígitos (mayor o igual a 1000 y menor o igual 9999). 
En caso que la variable NUMERO esté fuera del rango (menor a 1000 o mayor a 9999) entonces no se debe ejecutar el programa. 
Mostrar en pantalla cual es la unidad de mil, la centena, la decena y la unidad. No usar arreglos, vectores, listas o cualquier 
otro dato de ese tipo, la variable NUMERO debe ser de tipo entero. 

Integrantes: [Jesús Ortiz Rodríguez, Andrea Orozco Carrillo, Daniel Utria Brooks, Nicol Morales Díaz, Josue Gutierrez Cantillo]
Compilador usado: OnlineGDB (C Compiler).
*/

#include <stdio.h>

int main() {
    
    int NUMERO = 7235; 

    if (NUMERO < 1000 || NUMERO > 9999) {
        printf("el tipo de dato no es el correcto y el programa no se puede ejecutar.\n");
        return 1;
    }

    int UNIDAD_DE_MIL = NUMERO / 1000;
    int CENTENA = (NUMERO % 1000) / 100;
    int DECENA = (NUMERO % 100) / 10;
    int UNIDAD = NUMERO % 10;

    printf("{'Número' : %d, 'Unidad' : %d, 'Decena' : %d, 'Centena' : %d, 'Unidad de mil' : %d}\n", 
           NUMERO, UNIDAD, DECENA, CENTENA, UNIDAD_DE_MIL);
    return 0;
}