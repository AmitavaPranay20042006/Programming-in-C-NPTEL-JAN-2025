#include <stdio.h>
int main()
{
    int N;
    scanf("%d", &N); /* The value of N is taken from the test case data */

    /* Complete the code.
    Use the printf statements as below
    printf("%d is a number that can be expressed as power of 2.",N);
    printf("%d cannot be expressed as power of 2.",N);
    */
    // A number is a power of 2 if it has only one set bit in binary representation
    if (N > 0 && (N & (N - 1)) == 0)
    {
        printf("%d is a number that can be expressed as power of 2.", N);
    }
    else
    {
        printf("%d cannot be expressed as power of 2.", N);
    }

    return 0;
}