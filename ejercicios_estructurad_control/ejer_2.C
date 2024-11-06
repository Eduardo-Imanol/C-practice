#include <stdio.h>

int main() {
    int A, B, C;

    printf("Ingrese el valor de A: ");
    scanf("%d", &A);

    printf("Ingrese el valor de B: ");
    scanf("%d", &B);

    printf("Ingrese el valor de C: ");
    scanf("%d", &C);

    // Verificar si los valores son distintos
    if (A == B || A == C || B == C) {
        printf("¡Alerta! Los valores ingresados no son distintos. Por favor, ingrese valores diferentes.\n");
    } else {
        // Encontrar el valor menor
        int menor = A; // Supongamos inicialmente que A es el menor

        if (B < menor) {
            menor = B;
        }

        if (C < menor) {
            menor = C;
        }

        printf("El menor valor ingresado es: %d\n", menor);
    }

    return 0;
}