//Realizar un programa que lea 5 nombres y los imprima en orden descendente.
#include <stdio.h>
#include <string.h>

int main() {
    // Arreglo para almacenar los nombres y el delimitador
    char nombre[100], nombres[1000], delimitador[] = ",";

    // Arreglo para almacenar los nombres y el token
    char *token, *tokens[100];

    // Contador de tokens y número de nombres
    int numTokens = 0, i;

    // ciclo para leer los nombres
    for (i = 0; i < 5; i++) {
        printf("Escribe el nombre %d: ", i + 1);
        scanf(" %s", nombre);

        //Agrega el nombre a la cadena de nombres
        strcat(nombres, nombre);

        //Agrega una coma al final de cada palabra
        if (i < 4) {
            strcat(nombres, ", ");
        }
    }

    //Poner punto al final del ciclo 
    strcat(nombres, ".");

    //esta variable va a contener el token para separar los nombres
    token = strtok(nombres, delimitador);

    //ciclo while para separar los nombres con ayuda del token
    while (token != NULL) {
        tokens[numTokens] = token;
        numTokens++;
        token = strtok(NULL, delimitador);
    }

    //Imprimir los nombres de forma descendente
    for (int i = numTokens - 1; i >= 0; i--) {
        printf("%s\n", tokens[i]);
    }

    return 0;
}
