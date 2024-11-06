/*
Este programa obtiene la transpuesta de una matriz de números enteros. La transpuesta de 
una matriz de n × m es una matriz de m × n en la que el elemento de la fila i 
y columna j tiene el mismo valor que ocupa la fila j y columna i en la matriz original.
*/

#include <stdio.h>
#include <stdlib.h>

// Función que devuelve la matriz transpuesta
int** transposeMatriz(int f, int c, int** matriz) {
    int** matriz_transpuesta = (int**)malloc(c * sizeof(int*));
    for (int i = 0; i < c; i++) {
        matriz_transpuesta[i] = (int*)malloc(f * sizeof(int));
    }
    for (int i = 0; i < f; i++) {
        for (int j = 0; j < c; j++) {
            matriz_transpuesta[j][i] = matriz[i][j];
        }
    }
    return matriz_transpuesta;
}

int main() {
    int f, c;
    int** matriz, **matriz_transpuesta;

    printf("Ingrese el numero de filas en la matriz: ");
    scanf("%d", &f);

    printf("Ingrese el numero de columnas en la matriz: ");
    scanf("%d", &c);

    // Asignar memoria para la matriz
    matriz = (int**)malloc(f * sizeof(int*));
    for (int i = 0; i < f; i++) {
        matriz[i] = (int*)malloc(c * sizeof(int));
    }

    // Leer los valores de la matriz
    for (int i = 0; i < f; i++) {
        for (int j = 0; j < c; j++) {
            printf("Ingrese el valor de la posicion [%d][%d]: ", i + 1, j + 1);
            scanf("%d", &matriz[i][j]);
        }
    }

    // Obtener la matriz transpuesta
    matriz_transpuesta = transposeMatriz(f, c, matriz);

    printf("Matriz original:\n");
    for (int i = 0; i < f; i++) {
        for (int j = 0; j < c; j++) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }

    printf("Matriz transpuesta:\n");
    for (int i = 0; i < c; i++) {
        for (int j = 0; j < f; j++) {
            printf("%d ", matriz_transpuesta[i][j]);
        }
        printf("\n");
    }

    // Liberar memoria de la matriz y la matriz transpuesta
    for (int i = 0; i < f; i++) {
        free(matriz[i]);
    }
    free(matriz);

    for (int i = 0; i < c; i++) {
        free(matriz_transpuesta[i]);
    }
    free(matriz_transpuesta);

    return 0;
}