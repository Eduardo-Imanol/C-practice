//Realizar un programa que sustituya los espacios en blanco de una frase por símbolos de asterisco (*).

#include <stdio.h>
#include <string.h>

int main() {
    //Arreglo para almacenar la frase
    char frase[100]; 

    //Peticion para leer la frase
    printf("Escribe una frase: ");
    //funcion fgets investigada para solucionar el problema de scanf de que se conta cada " "
    fgets(frase, sizeof(frase), stdin);

    //Elimina el salto de linea
    frase[strcspn(frase, "\n")] = '\0';

    // Sustituir los espacios en blanco por asteriscos
    for (size_t i = 0; i < strlen(frase); i++) {
        if (frase[i] == ' ') {
            frase[i] = '*';
        }
    }

    //Mostrar la frase
    printf("Frase modificada: %s\n", frase);

    return 0;
}