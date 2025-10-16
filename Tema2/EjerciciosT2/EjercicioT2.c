#include <stdio.h>

// Función recursiva para calcular el factorial
unsigned long long factorial(int n) {
    if (n == 0 || n == 1) {
        return 1;
    }
    return n * factorial(n - 1);
}

int main() {
    int numero;

    printf("Introduce un número entero positivo: ");
    scanf("%d", &numero);

    if (numero < 0) {
        printf("El factorial no está definido para números negativos.\n");
    } else {
        printf("El factorial de %d es: %llu\n", numero, factorial(numero));
    }
    printf("Fin del programa.\n");
    printf("estoy en la rama\n");
    return 0;
}