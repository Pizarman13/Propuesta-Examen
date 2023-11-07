#include <iostream>

void encontrarTriplesPitagoricos(int limite) {
    int a, b, c;
    for (a = 1; a <= limite; a++) {
        for (b = a; b <= limite; b++) {
            printf(a, b);
        }
    }
}

int main() {
    std::cout << "Hello, World!" << std::endl;

    return 0;
}
