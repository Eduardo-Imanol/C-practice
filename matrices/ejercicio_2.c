#include <stdio.h>
#include <stdlib.h>

//funcion para escalar una matriz
int** escalarMatriz(int f, int c, int escalar,int** matriz) {
    int** matriz_escalada = (int**)malloc(f * sizeof(int*));
    for (int i = 0; i < f; i++) {
        matriz_escalada[i] = (int*)malloc(c * sizeof(int));
    }
    for (int i = 0; i < f; i++) {
        for (int j = 0; j < c; j++) {
            matriz_escalada[i][j] = escalar * matriz[i][j];
        }
    }
    return matriz_escalada;
}


int main() {
    int f, c, escalar;
    int** matriz, **matriz_escalada;

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

    printf("Matriz original:\n");
    for (int i = 0; i < f; i++) {
        for (int j = 0; j < c; j++) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }

    printf("Escalar: ");
    scanf("%d", &escalar);

    // Obtener la matriz escalada
    matriz_escalada = escalarMatriz(f, c, escalar,matriz);

    printf("Matriz escalada:\n");
    for (int i = 0; i < f; i++) {
        for (int j = 0; j < c; j++) {
            printf("%d ", matriz_escalada[i][j]);
        }
        printf("\n");
    }
}