//Realizar un programa que lea una frase y la muestre cada carácter en cada línea.

#include <stdio.h>
#include <string.h>

int main() {
    // Arreglo para almacenar la frase ingresada
    char frase[100]; 

    //Peticion para leer la frase
    printf("Escribe una frase: ");
    //funcion fgets investigada para solucionar el problema de scanf de que se conta cada " "
    fgets(frase, sizeof(frase), stdin);

    //Elimina el salto de línea de la función fgets
    frase[strcspn(frase, "\n")] = '\0';

    //Ciclo para mostrar cada carácter de la frase
    for (size_t i = 0; i < strlen(frase); i++) {
        printf("%c\n", frase[i]);
    }

    return 0;
}