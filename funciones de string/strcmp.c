#include <stdio.h>
#include <string.h>

int main() {
    char str1[] = "Hola";
    char str2[] = "lenguage C";

    int resultado = strcmp(str1, str2);

    printf("el resultado del string es %i\n",resultado);
    return 0;
}