#include <iostream>
#include <math.h>

void encontrarTriplesPitagoricos(int limite) {
    int a, b, c;
    for (a = 1; a <= limite; a++) {
        for (b = a; b <= limite; b++) {
            // Calcula el tercer lado del triángulo (c) usando el teorema de Pitágoras
            c = sqrt(a*a + b*b);
            // Verifica si el triángulo satisface la condición de un triple pitagórico
            if (c <= limite && c*c == a*a + b*b) {
                // Verifica si los lados forman un triángulo válido
                if ((a + b > c) && (a + c > b) && (b + c > a)) {
                    // Imprime el triple pitagórico
                    printf("- %d - %d - %d\n", a, b, c);
                }
            }
        }
    }
}

int main() {

    encontrarTriplesPitagoricos(17);
    return 0;
}
