#include<stdio.h>

int NumberSum(int n)
{
    if (n != 0)
    {
        return n + NumberSum(n - 1);
    }
    else
    {
        return n;
    }
}

int main()
{
    int number=50;
    printf("sum: %d", NumberSum(number));
    return 0;
}


