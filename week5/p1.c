#include <stdio.h>
int main()
{
    int N;
    scanf("%d", &N); /* An integer number taken as input from test cases */

    /*Complete the program by writing the rest of the code in the space provided.

    Please copy and paste the printf statement given below wherever required
    printf("\n%d is a perfect number.",N);
    printf("\n%d is not a perfect number.",N);
    */
    int sum = 0;
    scanf("%d", &N); /* An integer number taken as input from test cases */

    // Calculate the sum of proper divisors of N
    for (int i = 1; i <= N / 2; i++)
    {
        if (N % i == 0)
        {
            sum += i;
        }
    }

    // Check if N is a perfect number
    if (sum == N)
    {
        printf("%d is a perfect number.", N);
    }
    else
    {
        printf("%d is not a perfect number.", N);
    }

    return 0;
}
