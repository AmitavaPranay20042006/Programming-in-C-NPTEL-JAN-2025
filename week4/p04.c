#include <stdio.h>

void main() {
    int N, sum = 0;
    scanf("%d", &N); // Read the value of N from input

    int i = 2; // Start from the first even number
    while (i <= N) {
        sum += i; // Add the even number to sum
        i += 2; // Move to the next even number
    }

    printf("Sum = %d", sum); // Print the sum of even numbers
}