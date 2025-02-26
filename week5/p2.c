#include <stdio.h>
int main()
{
    int N;
    scanf("%d", &N); /*The number is accepted from the test case data*/

    /* Complete the rest of the code. Please use the printf statements as below
    by just changing the variables used in your program

    printf("The number %d contains %d digits.",N,count);

    */
    int count = 0;
    scanf("%d", &N); /* The number is accepted from the test case data */

    int temp = N; // Copy of N to process digit count

    // If N is 0, it has 1 digit
    if (temp == 0)
    {
        count = 1;
    }
    else
    {
        while (temp != 0)
        {
            temp /= 10; // Remove last digit
            count++;    // Increment count
        }
    }

    printf("The number %d contains %d digits.", N, count);

    return 0;
}