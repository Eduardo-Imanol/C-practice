#include <stdio.h>

//funsion para saber si es primo
int primo(int numero) {
    if (numero <= 1) {
        return 0;
    }
    
    for (int i = 2; i * i <= numero; i++) {
        if (numero % i == 0) {
            return 0;
        }
    }
    
    return 1;
}

//impresion de si es primo o no

void esPrimo(int numero) {
    if (primo(numero)) {
        printf("%d es un número primo.\n", numero);
    } else {
        printf("%d no es un número primo.\n", numero);
    }
}

int main() {
    int numero;
    printf("Ingrese un número entero mayor que cero: ");
    scanf("%d", &numero);
    
    esPrimo(numero);
    
    return 0;
}