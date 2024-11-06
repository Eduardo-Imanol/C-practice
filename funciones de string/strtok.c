#include <stdio.h>
#include <string.h>

int main() {
    char str[100]; 
    char c;

    printf("Escribe el valor: ");
    fgets(str, sizeof(str), stdin); 

    printf("Escribe el caracter a encontrar: ");
    scanf(" %c", &c); 

    char *token = strtok(str, &c); // Usamos strtok para buscar el carácter

    if (token != NULL) {
        printf("Carácter %c encontrado despues de %s\n", c, token);
    } else {
        printf("Carácter %c no encontrado en la cadena.\n", c);
    }

    return 0;
}
