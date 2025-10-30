#include <stdio.h>

int add(int a, int b) { return a + b; }
int mul(int a, int b) { return a * b; }

int main() {
    int x = 5, y = 7;
    printf("Summe: %d\n", add(x, y));
    printf("Produkt: %d\n", mul(x, y));
    return 0;
}
