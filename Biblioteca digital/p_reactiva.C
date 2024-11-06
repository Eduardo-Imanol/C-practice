#include <stdio.h>
#include <unistd.h> // Para la función sleep

// Definición de una estructura de evento
struct Evento {
    int tipo; // Tipo de evento (por ejemplo, notificación de disponibilidad de libro)
    int libro_id; // Identificador del libro
};

// Función reactiva para notificar la disponibilidad de un libro
void notificarDisponibilidadLibro(int libro_id) {
    printf("Notificación Reactiva: El libro %d está disponible para préstamo.\n", libro_id);
    // Lógica para notificar al usuario
}

int main() {
    // Simular eventos de notificación
    struct Evento eventos[] = {
        {1, 1}, // Evento 1: Notificación de disponibilidad del libro 1
        {1, 2}, // Evento 2: Notificación de disponibilidad del libro 2
        // Puedes agregar más eventos aquí
    };

    int numEventos = sizeof(eventos) / sizeof(eventos[0]);

    for (int i = 0; i < numEventos; i++) {
        if (eventos[i].tipo == 1) { // Tipo 1: Notificación de disponibilidad de libro
            printf("Usuario solicita notificación de disponibilidad para el libro %d.\n", eventos[i].libro_id);
            sleep(2); // Simula una espera
            notificarDisponibilidadLibro(eventos[i].libro_id);
        }
    }

    return 0;
}