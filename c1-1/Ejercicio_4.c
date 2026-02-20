/*
Ejercicio 4:
Se puede calcular el cuadrado de un número NUMERO al sumar los primeros NUMERO números impares.
Con esta lógica, el cuadrado del número 7 es la sumatoria de los primeros 7 números impares, es decir 1+3+5+7+9+11+13=49. 
Crear un programa que pida al usuario un número y se almacene en la variable NUMERO y luego imprima la suma de todos los números impares 
y su resultado. 

Integrantes: [Jesús Ortiz Rodríguez, Andrea Orozco Carrillo, Daniel Utria Brooks, Nicol Morales Díaz, Josue Gutierrez Cantillo]
Compilador usado: OnlineGDB (C Compiler).
*/

 #include <stdio.h>

int main() {
    int NUMERO;
    int suma = 0;
    int impar = 1;

    printf("Ingrese un numero entero positivo: ");
    scanf("%d", &NUMERO);

    if (NUMERO <= 0) {
        printf("Por favor ingrese un numero positivo.\n");
        return 0;
    }

    printf("Suma de los primeros %d numeros impares:\n", NUMERO);

    for (int i = 0; i < NUMERO; i++) {
        printf("%d", impar);
        suma += impar;
        impar += 2;

        if (i < NUMERO - 1) {
            printf(" + ");
        }
    }

    printf(" = %d\n", suma);
    printf("El cuadrado de %d es %d\n", NUMERO, suma);

    return 0;
}
