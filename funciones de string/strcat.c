#include <stdio.h>
#include <string.h>

int main() {
    char str1[] = "Hola ";

    char str2[] = "lenguage C";

    strcat(str1, str2);
    printf("%s\n", str1);
    
    return 0;
}