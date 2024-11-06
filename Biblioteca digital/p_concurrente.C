#include <stdio.h>
#include <pthread.h> //libreria para manejar la programacion concurrente

void* buscarLibro(void* arg) {
    printf("Hilo 1: Buscando libro...\n");
    // Lógica de búsqueda
    return NULL; // Deveria devolver un puntero, en este caso, no se necesita devolver nada.
}

void* prestarLibro(void* arg) {
    printf("Hilo 2: Prestando libro...\n");
    // Lógica de préstamo
    return NULL; // Deveria devolver un puntero, en este caso, no se necesita devolver nada.
}

int main() {
    pthread_t hilo1, hilo2;

    pthread_create(&hilo1, NULL, buscarLibro, NULL);
    pthread_create(&hilo2, NULL, prestarLibro, NULL);

    pthread_join(hilo1, NULL);
    pthread_join(hilo2, NULL);

    printf("Tareas concurrentes completadas.\n");
    return 0;
}