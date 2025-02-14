#include <stdio.h>

void main() {
    int n;
    long int fact; 
    scanf("%d", &n); // Read the number from input

    fact = 1; // Initialize fact to 1
    int i = 1;
    while (i <= n) {
        fact *= i; // Multiply fact by i
        i++; // Increment i
    }

    printf("The Factorial of %d is : %ld", n, fact); // Print the result
}