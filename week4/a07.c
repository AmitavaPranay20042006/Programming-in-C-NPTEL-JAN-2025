#include <stdio.h>

int main() {
    int a = 5, b = 7, c = 111;
    c /= ++a * b--;
    printf("a = %d\n", a);
    printf("b = %d\n", b);
    printf("c = %d\n", c);
    return 0;
}