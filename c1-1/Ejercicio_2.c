/*
Ejercicio 2:
Enunciado: De un número entero positivo que está guardado en una variable llamada NUMERO, mostrar en pantalla 
su raíz cuadrada usando el método de Newton. Para este ejercicio debe realizarse una función que acepte el valor 
de la variable NUMERO y retorne el resultado usando el método de Newton, sin usar una librería que contenga 
esa función. 
Resultado esperado en pantalla: {'Número' : NUMERO, 'Raíz cuadrada usando Newton' : RESULTADO}

Integrantes: [Jesús Ortiz Rodríguez, Andrea Orozco Carrillo, Daniel Utria Brooks, Nicol Morales Díaz, Josue Gutierrez Cantillo]
Compilador usado: OnlineGDB (C Compiler).
*/

#include <stdio.h>

double calcularRaizNewton(int numero) {
    
    if (numero == 0) {
        return 0.0;
    }

    double x = (double)numero; 
    double raiz;
    double precision = 0.00001; 

    while (1) {
        
        raiz = 0.5 * (x + (numero / x));
        
        double diferencia = x - raiz;
        if (diferencia < 0) {
            diferencia = -diferencia;
        }
        
        if (diferencia < precision) {
            break;
        }
        
        x = raiz;
    }
    
    return raiz;
}

int main() {
 
    int NUMERO = 223; 
    if (NUMERO < 0) {
        printf("el tipo de dato no es el correcto y el programa no se puede ejecutar.\n");
        return 1;
    }

    double RESULTADO = calcularRaizNewton(NUMERO);
    printf("{'Número' : %d, 'Raíz cuadrada usando Newton' : %g}\n", NUMERO, RESULTADO);

    return 0;
}