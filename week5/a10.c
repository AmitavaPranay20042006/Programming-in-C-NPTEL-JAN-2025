#include <stdio.h>

int main()
{
    int i=1, j;
    for(j=0; j<=10; j+=i)
    {
        i=i+j;
    }
    return 0;
}