#include <stdio.h>
#include <string.h>

#include <stdio.h>
#include <string.h>

int main() {
    char str[100]; // Declara un array de caracteres para la cadena
    char c;

    printf("Escribe el valor: ");
    scanf("%s", str); // Usa %s para leer una cadena

    printf("Escribe el caracter a encontrar: ");
    scanf(" %c", &c); // Usa %c para leer un solo carácter y agrega un espacio antes %c

    char *posicion = strchr(str, c);

    if (posicion != NULL) {
        printf("Carácter %c encontrado en la posición %ld\n", c, posicion - str);
    } else {
        printf("Carácter %c no encontrado en la cadena.\n", c);
    }
    
    return 0;
}
