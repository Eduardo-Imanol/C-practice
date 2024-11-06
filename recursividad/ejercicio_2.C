/*Implementar una función recursiva de la sucesión Fibonacci. Donde el caso base es: 
Las posiciones 0 y 1 son = 1. La posición 2 utiliza estos dos valores sumándolos.*/

#include <stdio.h>

int fibonacci(int n) {
    // Caso base: las posiciones 0 y 1 son 1
    if (n == 0 || n == 1) {
        return 1;
    }
    // Caso recursivo: la posición n es la suma de las posiciones n-1 y n-2
    else {
        return fibonacci(n - 1) + fibonacci(n - 2);
    }
}

int main() {
    int n, resultado;

    //peticion de la posicion
    printf("Ingresa la posicion: ");
    scanf("%d", &n); 

    //llamada a la funcion y asignacion a la variable delresultado
    resultado = fibonacci(n);
    printf("El número de Fibonacci en la posición %d es: %d\n", n, resultado);
    return 0;
}