#include <stdio.h>

// Definición de una estructura para representar un agente (usuario)
struct Agente {
    int id;
    char nombre[50];
    char accion[50];
};

// Función para que un agente realice una acción
void realizarAccion(struct Agente *agente) {
    printf("Agente %s (%d): Realizando acción \"%s\"\n", agente->nombre, agente->id, agente->accion);
    // Lógica para realizar la acción
}

int main() {
    // Crear agentes
    struct Agente usuario1 = {1, "Usuario1", "Buscar un libro"};
    struct Agente usuario2 = {2, "Usuario2", "Prestar un libro"};

    // Simular que los agentes realizan acciones
    realizarAccion(&usuario1);
    realizarAccion(&usuario2);

    return 0;
}