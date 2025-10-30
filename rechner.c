#include <stdio.h>

int add(int a, int b) { return a + b; }

int main() {
    int x = 2, y = 3;
    printf("Summe: %d\n", add(x, y));
    return 0;
}
