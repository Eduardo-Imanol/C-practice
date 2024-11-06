#include <stdio.h>

int main() {
    int n, numero, pares = 0, impares = 0;

    printf("Ingrese un número entero positivo n: ");
    scanf("%d", &n);

    if (n < 1) {
        printf("Por favor, ingrese un número entero positivo.\n");
        return 1; // Terminar el programa con un código de error
    }

    numero = 1; // Iniciar desde el primer número en el rango

    do {
        if (numero % 2 == 0) {
            // Si el número es par, incrementar el contador de pares
            pares++;
        } else {
            // Si el número es impar, incrementar el contador de impares
            impares++;
        }

        numero++;
    } while (numero <= n);

    printf("Cantidad de números pares en el rango de 1 a %d: %d\n", n, pares);
    printf("Cantidad de números impares en el rango de 1 a %d: %d\n", n, impares);

    return 0;
}