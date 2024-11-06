#include <stdio.h>

int main() {
    int numero;

    // Solicitar al usuario que ingrese un entero positivo
    printf("Ingrese un entero positivo para comenzar la Conjetura de Ulam: ");
    scanf("%d", &numero);

    // Validar que el número ingresado sea positivo
    if (numero <= 0) {
        printf("Por favor, ingrese un entero positivo.\n");
        return 1; // Terminar el programa con un código de error
    }

    // Mostrar el número inicial
    printf("%d, ", numero);

    // Generar la serie de Ulam hasta llegar a 1
    while (numero != 1) {
        if (numero % 2 == 0) {
            // Si el número es par, divídelo entre 2
            numero /= 2;
        } else {
            // Si el número es impar, multiplica por 3 y suma 1
            numero = numero * 3 + 1;
        }
        // Mostrar el número en la secuencia
        printf("%d, ", numero);
    }

    printf("\n"); // Salto de línea al final

    return 0;
}