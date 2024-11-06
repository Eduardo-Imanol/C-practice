#include <stdio.h>
#include <string.h>

// Esta función solicita el nombre del libro al usuario y lo devuelve como una cadena.
void obtenerNombreDeLibro(char nombre[100]) {
    printf("Escriba el nombre del libro que busca:\n");
    scanf("%s", nombre);
}

void buscarLibro(char nombre[100]) {
    printf("Buscando el libro %s\n", nombre);
}

void prestarLibro(char nombre[100]) {
    printf("Prestando el libro %s\n", nombre);
}

void devolverLibro(char nombre[100]) {
    printf("Recibiendo el libro %s\n", nombre);
}

int main() {
    char opcion;
    char nombreDeLibro[100];

    // Solicitar la opción al usuario
    printf("¿Desea pedir (p) o devolver (d) un libro?\n");
    scanf(" %c", &opcion); // Añade un espacio antes de %c para evitar problemas de lectura de caracteres.

    switch (opcion) {
        case 'p':
            obtenerNombreDeLibro(nombreDeLibro);
            buscarLibro(nombreDeLibro);
            prestarLibro(nombreDeLibro);
            break;
        case 'd':
            obtenerNombreDeLibro(nombreDeLibro);
            buscarLibro(nombreDeLibro);
            devolverLibro(nombreDeLibro);
            break;
        default:
            printf("Opción no válida.\n");
            break;
    }

    return 0;
}