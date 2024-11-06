#include <stdio.h>// Librería para gestionar restricciones

// Restricciones
int tiempoMaximoPrestamo = 14; // Máximo 14 días de préstamo
int copiasDisponibles = 5;     // 5 copias disponibles del libro

int main() {
    int libro_id = 1;
    int usuario_id = 123;
    int diasPrestamo = 7; // Supongamos que el usuario solicita un préstamo de 7 días

    // Aplicar restricciones
    if (diasPrestamo <= tiempoMaximoPrestamo && copiasDisponibles > 0) {
        // Realizar el préstamo
        copiasDisponibles--;
        printf("Libro %d prestado al usario %d con éxito por %d días.\n", libro_id, usuario_id ,diasPrestamo);
    } else {
        printf("No se pudo prestar el libro debido a restricciones.\n");
    }

    return 0;
}