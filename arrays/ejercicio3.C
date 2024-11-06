/*Realizar un programa que calcule el promedio grupal que obtendrá un grupo de alumnos en la materia 
de Programación, si se considera que en el grupo hay N estudiantes.*/

#include <stdio.h>

int main() {
    int N; // Número de estudiantes en el grupo
    double suma_calificaciones = 0; // Variable para almacenar la suma de las calificaciones
    double promedio; // Variable para almacenar el promedio grupal

    // Pedir al usuario que ingrese el número de estudiantes
    printf("Ingrese el número de estudiantes en el grupo: ");
    scanf("%d", &N);

    // Validar que el número de estudiantes sea mayor que 0
    if (N <= 0) {
        printf("El número de estudiantes debe ser mayor que 0.\n");
        return 1; // Salir del programa con un código de error
    }

    // Leer las calificaciones de los estudiantes y calcular la suma
    for (int i = 1; i <= N; i++) {
        double calificacion;
        printf("Ingrese la calificación del estudiante %d: ", i);
        scanf("%lf", &calificacion);
        suma_calificaciones += calificacion;
    }

    // Calcular el promedio grupal
    promedio = suma_calificaciones / N;

    // Mostrar el promedio grupal
    printf("El promedio grupal en Programación es: %.2lf\n", promedio);

    return 0;
}
