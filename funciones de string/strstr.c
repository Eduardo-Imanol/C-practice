#include <stdio.h>
#include <string.h>

int main() {
    char str[100]; 
    char substr[100];

    printf("Escribe la cadena: ");
    fgets(str, sizeof(str), stdin);

    printf("Escribe la subcadena a encontrar: ");
    fgets(substr, sizeof(substr), stdin);

    str[strcspn(str, "\n")] = '\0';
    substr[strcspn(substr, "\n")] = '\0';

    char *posicion = strstr(str, substr);

    if (posicion != NULL) {
        printf("Subcadena \"%s\" encontrada en la posición %ld\n", substr, posicion - str);
    } else {
        printf("Subcadena \"%s\" no encontrada en la cadena.\n", substr);
    }

    return 0;
}
