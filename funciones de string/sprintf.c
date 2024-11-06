#include <stdio.h>
#include <string.h>

int main() {
    char valor[100]; // Declarar como arreglo para almacenar una cadena.
    char str[100];   // Declarar como arreglo para almacenar una cadena.

    printf("Escribe el valor: ");
    fgets(valor, sizeof(valor), stdin); // Leer una línea completa de texto, incluyendo espacios.

    // Eliminar el carácter de salto de línea al final de la cadena.
    valor[strcspn(valor, "\n")] = '\0';

    sprintf(str, "El valor es: %s", valor);  // Usar %s para una cadena.

    printf("%s\n", str);

    return 0;
}