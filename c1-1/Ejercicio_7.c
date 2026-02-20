/******************************************************************************

Ejercicio 7:
Enunciado: En sistemas embebidos, los registtros suelen empaquetar varios estados. Leer una
variable de 8 bits llamada REGISTRO_ESTADO. El programa debe extraer y mostrar por separado
el valor de los 4 bits menos significativos (nibble inferior) y el estado (0 a 19) del bit
número 5. Usar exclusivamente operadores de bits (&,>>).

Integrantes: [Jesús Ortiz Rodríguez, Andrea Orozco Carrillo, Daniel Utria Brooks, Nicol Morales Díaz, Josue Gutierrez Cantillo]
Compilador usado: OnlineGBD.

*******************************************************************************/

#include <stdio.h>

int main() {
    printf("Debe poner el número en REGISTRO_ESTADO para poder comprobar.\n");
    
    int REGISTRO_ESTADO = 20; 
    if (REGISTRO_ESTADO < 0 || REGISTRO_ESTADO > 255) {
        printf("Recuerde que el número a comprobar debe estar entre 0 y 225.\n");
        return 0;
    }

    unsigned char nibble_inferior;
    unsigned char bit5;
    
    nibble_inferior = REGISTRO_ESTADO & 0x0F;
    bit5 = (REGISTRO_ESTADO >> 5) & 1;
    
    printf("El registro de estado ingresado fue: %d\n", REGISTRO_ESTADO);
    printf("Sus digitos en binario son: %d%d%d%d%d%d%d%d\n",
       (REGISTRO_ESTADO >> 7) & 1,
       (REGISTRO_ESTADO >> 6) & 1,
       (REGISTRO_ESTADO >> 5) & 1,
       (REGISTRO_ESTADO >> 4) & 1,
       (REGISTRO_ESTADO >> 3) & 1,
       (REGISTRO_ESTADO >> 2) & 1,
       (REGISTRO_ESTADO >> 1) & 1,
       REGISTRO_ESTADO & 1);

    printf("Los 4 bits menos significativos (Nibble inferior) son: %d%d%d%d\n",
       (nibble_inferior >> 3) & 1,
       (nibble_inferior >> 2) & 1,
       (nibble_inferior >> 1) & 1,
       nibble_inferior & 1);
       
    printf("El estado del bit número 5 es: %d\n", bit5);

    return 0;
}