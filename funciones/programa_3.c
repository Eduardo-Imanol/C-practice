#include <stdio.h>

void suma(float num1, float num2, float *resultado) {
    *resultado = num1 + num2;
}

int main() {
    float num1, num2, resultado;
    printf("Ingrese el primer número: ");
    scanf("%f", &num1);
    printf("Ingrese el segundo número: ");
    scanf("%f", &num2);
    
    suma(num1, num2, &resultado);
    
    printf("La suma de %.2f y %.2f es %.2f.\n", num1, num2, resultado);
    
    return 0;
}