#include <stdio.h>
int main()
{
    int N;
    scanf("%d", &N); /*The value of N is taken as input from the test case */
                     // Loop to print the pyramid pattern
    for (int i = N; i > 0; i--)
    { // Rows decreasing from N to 1
        for (int j = 0; j < i; j++)
        { // Print '*' i times in each row
            printf("*");
        }
        printf("\n"); // Move to the next line after each row
    }

    return 0;
}
