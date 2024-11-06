/*Escribe una función rercursiva power(x, n) que regrese el valor de x^n.
(supón que n es un entero)
Empieza por escribir el caso base.*/

#include <stdio.h>

int power(int x, int n) {
    // Caso base: x elevado a la potencia 0 es siempre 1
    if (n == 0) {
        return 1;
    }
    // Caso recursivo: x elevado a la potencia n es x multiplicado por x^(n-1)
    else {
        return x * power(x, n - 1);
    }
}

int main() {
    int x, n, result;

    //peticion de la base en la operacion
    printf("Ingresa el valor de x: ");
    scanf("%d", &x);

    //peticion del exponente en laa operacion
    printf("Ingresa el valor de n: ");
    scanf("%d", &n);

    //llamada a la funcion y asignacion en variable
    result = power(x, n);

    //impresion del resultado
    printf("%d^%d = %d\n", x, n, result);
    return 0;
}