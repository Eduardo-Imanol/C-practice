#include <stdio.h>
#include <string.h>

int main() {
    char origen[] = "Hola lenguage C!";
    char destino[20];
    
    strcpy(destino, origen);
    
    printf("El contenido de destino es: %s\n", destino);
    
    return 0;
}