#include <stdio.h>

int main() {

    //Declaracion de variables
    float sueldo;

    //Imprecion para la peticion de datos
    printf("Ingrese el sueldo del trabajador: ");
    scanf("%f", &sueldo);

    if (sueldo < 1000) {
        // Aplicar un aumento del 15%
        float aumento = sueldo * 0.15;
        float nuevoSueldo = sueldo + aumento;
        printf("Nuevo sueldo del trabajador: $%.2f\n", nuevoSueldo);
    } else {
        // No hay aumento
        printf("Sueldo del trabajador: $%.2f\n", sueldo);
    }

    return 0;
}