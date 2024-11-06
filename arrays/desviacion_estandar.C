#include <stdio.h>
#include <math.h>  // Necesario para las funciones de matemanticas para hacer calculos

int main() {
    int numeros[5];   // Arreglo para almacenar los 5 números
    double resultados[5], promedio, desviacion_estandar, sumatoria; // Vareables necesarias para aplicar la logica

    // Pedir al usuario que ingrese los 5 números
    printf("Ingresa 5 números:\n");
    for (int i = 0; i < 5; i++) {
        scanf("%d", &numeros[i]);
    }

    // Calcular el promedio de los números
    promedio = 0;
    for (int i = 0; i < 5; i++) {
        promedio += numeros[i];
    }
    promedio /= 5;

    // Calcular la desviación estándar
    sumatoria = 0;
    for (int i = 0; i < 5; i++) {
        sumatoria += pow(numeros[i] - promedio, 2);
    }
    desviacion_estandar = sqrt(sumatoria / 5);

    // Almacenar la desviación estándar en el arreglo "resultados"
    for (int i = 0; i < 5; i++) {
        resultados[i] = desviacion_estandar;
    }

    // Imprimir la lista de resultados
    printf("Resultados de la desviación estándar:\n");
    for (int i = 0; i < 5; i++) {
        printf("%.2lf\n", resultados[i]);
    }

    return 0;
}
