#include <stdio.h>
#include <string.h>

// Componente para la búsqueda de libros
struct LibroComponent {
    char titulo[100];
    int age;
};

void buscarLibro(struct LibroComponent* libroComponent, const char* tituloBuscado) {
    printf("Componente de búsqueda: Buscando libro por título...\n");
    if (strcmp(libroComponent->titulo, tituloBuscado) == 0) {
        printf("Libro encontrado: %s (%d)\n", libroComponent->titulo, libroComponent->age);
    } else {
        printf("Libro no encontrado.\n");
    }
}

// Componente para la gestión de usuarios
struct UsuarioComponent {
    char nombre[100];
    int edad;
};

void gestionarUsuario(struct UsuarioComponent* usuarioComponent) {
    printf("Componente de usuario: Gestionando usuario...\n");
    printf("Nombre del usuario: %s\n", usuarioComponent->nombre);
    printf("Edad del usuario: %d\n", usuarioComponent->edad);
    // Lógica de gestión de usuarios que utiliza datos de usuarioComponent
}

int main() {
    // Crear instancias de componentes
    struct LibroComponent libroComponent;
    struct UsuarioComponent usuarioComponent;

    // Inicializar los datos de los componentes
    strcpy(libroComponent.titulo, "El Gran Gatsby");
    libroComponent.age = 1925;

    strcpy(usuarioComponent.nombre, "Alice");
    usuarioComponent.edad = 30;

    // Utilizar componentes para realizar acciones
    buscarLibro(&libroComponent, "El Gran Gatsby");
    gestionarUsuario(&usuarioComponent);

    return 0;
}