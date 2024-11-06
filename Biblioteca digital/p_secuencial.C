#include <stdio.h>

int main() {
    char opcion;
    char nombreDelLibro[100];
    
    // Solicitar la opción al usuario de devolver o pedir un libro
    printf("¿Desea pedir (p) o devolver (d) un libro?\n");
    scanf(" %c", &opcion); // Nota el espacio antes de %c para evitar problemas de lectura de caracteres.

    // Realizar la acción correspondiente
    switch (opcion) {
        case 'p':
            printf("Escriba el nombre del libro que busca:\n");
            scanf(" %s", nombreDelLibro); 
            printf("Buscando el libro\n");
            printf("Prestando el libro\n");
            break;
        case 'd':
        printf("Escriba el nombre del libro que va a devolver:\n");
            scanf(" %s", nombreDelLibro);
            printf("Devolviendo libro...\n");
            printf("Guardando libro...\n");
            break;
        default:
            printf("Opción no válida.\n");
            break;
    }

    return 0;
}