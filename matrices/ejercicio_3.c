#include <stdio.h>

// Definición de la función `leer_temperaturas`
void leer_temperaturas(int matriz[7][24]) {
    // Declaramos las variables
    int i, j;
    int opcion;

    printf("Seleccione una opción:\n");
    printf("1. Usar matriz predefinida\n");
    printf("2. Ingresar datos manualmente\n");
    printf("Opción: ");
    scanf("%d", &opcion);


    if (opcion == 1) {
        // Matriz predefinida con temperaturas simuladas de un día normal
        int matrizPredefinida[7][24] = {
            { 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 35, 36, 36, 37, 36, 35, 34, 33, 32, 31, 30, 29, 28 },
            { 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 36, 37, 37, 38, 37, 36, 35, 34, 33, 32, 31, 30, 29, 28 },
            { 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 37, 38, 37, 36, 35, 34, 33, 32, 31, 30, 29, 28 },
            { 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 35, 36, 35, 34, 33, 32, 31, 30, 29, 28, 27, 26 },
            { 21, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 34, 35, 34, 33, 32, 31, 30, 29, 28, 27, 26, 25 },
            { 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 35, 36, 36, 37, 36, 35, 34, 33, 32, 31, 30, 29, 28 },
            { 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 38, 39, 39, 40, 39, 38, 37, 36, 35, 34, 33, 32, 31 }
        };
        for (i = 0; i < 7; i++) {
            for (j = 0; j < 24; j++) {
                matriz[i][j] = matrizPredefinida[i][j];
            }
            }
        } else {
    // Leemos las temperaturas por teclado
    for (i = 0; i < 7; i++) {
        for (j = 0; j < 24; j++) {
            printf("Ingrese la temperatura en la hora %d del día %d: ", j, i + 1);
            scanf("%d", &matriz[i][j]);
        }
    }
    }
}

int calcular_temperatura_media_dia(int matriz[7][24], int dia) {
    // Declaramos las variables
    int suma, media;

    // Inicializamos las variables
    suma = 0;

    // Calculamos la suma de las temperaturas del día
    for (int i = 0; i < 24; i++) {
        suma += matriz[dia][i];
    }

    // Calculamos la media
    media = suma / 24;

    return media;
}

int contar_dias_temperatura_superior_30(int matriz[7][24]) {
    // Declaramos las variables
    int i, contador;

    // Inicializamos las variables
    contador = 0;

    // Recorremos la matriz
    for (i = 0; i < 7; i++) {
        // Si la temperatura media del día es superior a 30, incrementamos el contador
        if (calcular_temperatura_media_dia(matriz, i) > 30) {
            contador++;
        }
    }

    return contador;
}


// Definición de la función `calcular_temperaturas`
void calcular_temperaturas(int matriz[7][24], int *maxima, int *minima) {
    // Declaramos las variables
    int i, j;

    // Inicializamos las variables
    *maxima = matriz[0][0];
    *minima = matriz[0][0];

    // Calculamos la temperatura máxima y mínima
    for (i = 0; i < 7; i++) {
        for (j = 0; j < 24; j++) {
            if (matriz[i][j] > *maxima) {
                *maxima = matriz[i][j];
            }
            if (matriz[i][j] < *minima) {
                *minima = matriz[i][j];
            }
        }
    }
}

// Definición de la función `imprimir_resultados`
void imprimir_resultados(int maxima, int minima, int medias[7], int dias_calor) {
    // Declaramos las variables
    int i;

    // Imprimimos la máxima y mínima temperaturas
    printf("Temperatura máxima: %d\n", maxima);
    printf("Temperatura mínima: %d\n", minima);

    // Imprimimos la temperatura media de cada día
    for (i = 0; i < 7; i++) {
        printf("Día %d: %d\n", i + 1, medias[i]);
    }

    // Imprimimos el número de días en los que la temperatura media fue superior a 30 grados
    printf("Número de días con temperatura media superior a 30 grados: %d\n", dias_calor);
}

// Programa principal
int main() {
    // Declaramos las variables
    int matriz[7][24], maxima, minima, medias[7], dias_calor;

    // Leemos las temperaturas
    leer_temperaturas(matriz);

    // Calculamos las temperaturas
    for (int i = 0; i < 7; i++) {
        medias[i] = calcular_temperatura_media_dia(matriz, i);
    }

    dias_calor = contar_dias_temperatura_superior_30(matriz);

    calcular_temperaturas(matriz, &maxima, &minima);

    // Imprimimos los resultados
    imprimir_resultados(maxima, minima, medias, dias_calor);

    return 0;
}