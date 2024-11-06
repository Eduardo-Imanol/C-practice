/*Realizar un programa que 151turas de todo un día y determine cual es la temperatura promedio durante el día,
e imprimir cuál era la temperatura a las 8 am, a las 2 pm y a las 10 pm.*/

#include <stdio.h>

int main() {
    double temperaturas[24]; // Arreglo para almacenar las 24 temperaturas
    double temperatura_promedio = 0; // Variable para almacenar la temperatura promedio
    // Leer las 24 temperaturas
    for (int i = 0; i < 24; i++) {
        printf("Ingresa la temperatura a las %d:00 horas: ", i);
        scanf("%lf", &temperaturas[i]);
        temperatura_promedio += temperaturas[i];
    }

    // Calcular la temperatura promedio
    temperatura_promedio /= 24;

    // Mostrar la temperatura promedio
    printf("La temperatura promedio durante el día es: %.2lf\n", temperatura_promedio);

    // Mostrar las temperaturas a las 8 am, 2 pm y 10 pm
    printf("La temperatura a las 8:00 am fue: %.2lf\n", temperaturas[8]);
    printf("La temperatura a las 2:00 pm fue: %.2lf\n", temperaturas[14]);
    printf("La temperatura a las 10:00 pm fue: %.2lf\n", temperaturas[22]);

    return 0;
}
