/*Realizar un programa que determine el valor mínimo y el valor máximo dentro de un arreglo de 10 elementos dados por el usuario.*/

#include <stdio.h>

int main() {
    int arreglo[10]; // Arreglo para almacenar los 10 elementos
    int minimo, maximo; // Variables para almacenar el valor mínimo y máximo

    // Leer los 10 elementos del usuario
    printf("Ingresa 10 elementos:\n");
    for (int i = 0; i < 10; i++) {
        printf("Elemento %d: ", i + 1);
        scanf("%d", &arreglo[i]);
    }

    // Inicializar minimo y maximo con el primer elemento
    minimo = arreglo[0];
    maximo = arreglo[0];

    // Encontrar el valor mínimo y máximo
    for (int i = 1; i < 10; i++) {
        if (arreglo[i] < minimo) {
            minimo = arreglo[i];
        }
        if (arreglo[i] > maximo) {
            maximo = arreglo[i];
        }
    }

    // Mostrar el valor mínimo y máximo
    printf("El valor mínimo es: %d\n", minimo);
    printf("El valor máximo es: %d\n", maximo);

    return 0;
}
