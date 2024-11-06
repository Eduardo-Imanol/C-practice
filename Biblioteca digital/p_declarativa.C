#include <stdio.h>

// Declaraciones de funciones para consultas
struct Libro {
    int id;
    char titulo[100];
};

struct Usuario {
    int id;
    char nombre[100];
};

struct Libro buscarLibroPorId(int libro_id) {
    struct Libro libro = {libro_id, "El Gran Gatsby"};
    return libro;
}

struct Usuario buscarUsuarioPorId(int usuario_id) {
    struct Usuario usuario = {usuario_id, "Alice"};
    return usuario;
}

// Consulta declarativa para buscar un libro
void consultaBuscarLibro(int libro_id) {
    printf("Consulta declarativa: Buscar libro con ID %d\n", libro_id);
    struct Libro libro = buscarLibroPorId(libro_id);
    printf("Libro encontrado: %s\n", libro.titulo);
}

// Reglas declarativas para préstamo de libros
void reglasPrestamo(int usuario_id, int libro_id) {
    struct Libro libro = buscarLibroPorId(libro_id);
    struct Usuario usuario = buscarUsuarioPorId(usuario_id);

    printf("Libro %s prestado a %s.\n", libro.titulo, usuario.nombre);
}

int main() {
    int libro_id = 1;
    int usuario_id = 123;

    // Realizar consultas y aplicar reglas declarativas
    consultaBuscarLibro(libro_id);
    reglasPrestamo(usuario_id, libro_id);

    return 0;
}