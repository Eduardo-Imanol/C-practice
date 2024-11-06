#include <stdio.h>

//funcion para imprimir asteriscos
void imprimir_asteriscos(int numero) {
    for (int i = 0; i < numero; i++) {
        printf("*");
    }
    printf("\n");
}

//funcion principal
int main() {
    int numero = 0;
//mandar mensaje de ingreso de numeros enteros para la impresion de asteriscos

    printf("Ingresa la cantidad de asteriscos que deseas imprimir por consola: ");
    scanf("%d", &numero);

    imprimir_asteriscos(numero);
    return 0;
}
