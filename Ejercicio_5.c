/******************************************************************************

Ejercicio 5:
Enunciado: Preguntar al usuario un número entero y almacenar en la variable NUMERO. 
Imprimir el valor de la posición NUMERO asumiendo que f0=0 y f1=1. Verificar que 
NUMERO deber >= 2, en caso contrario mostrar un mensaje que NUMERO debe cumplir la 
condición.

Integrantes: [Jesús Ortiz Rodríguez, Andrea Orozco Carrillo, Daniel Utria Brooks, Nicol Morales Díaz, Josue Gutierrez Cantillo]
Compilador usado: OnlineGBD.

*******************************************************************************/

#include <stdio.h>
 int main () {
     int NUMERO;
     printf("Debe poner el número que desea comprobar en la variable NUMERO\n");
     scanf("%d", &NUMERO);
    
     while (NUMERO<2) {
         printf("La variable NUMERO debe ser mayor o igual a 2, vuelva a introducirla\n");
         scanf("%d", &NUMERO);
         
     }
    
        int f0 = 0;
        int f1 = 1;
        int resultado;
        int i;
     
        for (i = 2; i <= NUMERO; i++){
            resultado = f0 + f1;
            f0 = f1;
            f1 = resultado;
         }
     printf("La posición del número que introdujo fue: %d y el número correspondiente a esa posición en la sucesión de Fibonacci es: %d \n", NUMERO, resultado);
    
 return 0;
 }