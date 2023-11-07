#include <iostream>
#include <math.h>

void encontrarTriplesPitagoricos(int limite) {
    int a, b, c;
    for (a = 1; a <= limite; a++) {
        for (b = a; b <= limite; b++) {
            c = sqrt(a*a + b*b);
            if (c <= limite && a*a + b*b == c*c) {
                printf("- %d - %d - %d\n", a, b, c);
            }
        }
    }
}

int main() {
    std::cout << "Hello, World!" << std::endl;

    encontrarTriplesPitagoricos(20);
    return 0;
}
