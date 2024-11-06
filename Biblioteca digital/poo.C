#include <stdio.h>
#include <string.h>

// Definición de una clase Libro
struct Libro {
    char titulo[100];
    char autor[100];
    int paginas;
};

// Definición de una clase Biblioteca
struct Biblioteca {
    struct Libro libros[100];
    int iD;
};

int main() {
    // Crear objetos de Libro y Biblioteca
    struct Biblioteca biblioteca;

    // Inicializar los atributos de la biblioteca
    biblioteca.iD = 1;

    // Inicializar el primer libro de la biblioteca
    strcpy(biblioteca.libros[0].titulo, "El Quijote");
    strcpy(biblioteca.libros[0].autor, "Miguel de Cervantes");
    biblioteca.libros[0].paginas = 1000;

    // Imprimir los atributos de la biblioteca
    printf("La biblioteca tiene %d libros.\n", biblioteca.iD);
    printf("El primer libro es: %s de %s con %d páginas.\n",
            biblioteca.libros[0].titulo, biblioteca.libros[0].autor,
            biblioteca.libros[0].paginas);

    return 0;
}
