#include <stdio.h>

int main() {
    char cadena[100];

    printf("Introduce una cadena: ");
    fgets(cadena, sizeof(cadena), stdin);

    printf("La cadena introducida es: %s", cadena);

    return 0;
}