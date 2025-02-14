#include <stdio.h>
#include <math.h>

int main() {
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);

    // Check if the triangle is possible
    if (a + b > c && a + c > b && b + c > a) {
        // Check for right-angled triangle
        if (a * a + b * b == c * c || a * a + c * c == b * b || b * b + c * c == a * a) {
            printf("Right-angle Triangle");
        } else if (a == b && b == c) {
            printf("Equilateral Triangle");
        } else if (a == b || b == c || a == c) {
            printf("Isosceles Triangle");
        } else {
            printf("Scalene Triangle");
        }
    } else {
        printf("Triangle is not possible");
    }

    return 0;
}