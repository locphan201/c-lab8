#include <stdio.h>
#include <math.h>

int isPrime(int num)
{
    if (num % 2 == 0)
    {
        return 0;
    }

    for (int i = 3; i < sqrt(num); i+=2)
    {
        if (num % i == 0)
        {
            return 0;
        }
    }
    return 1;
}

int main()
{
    int num = 3;

    if (isPrime(num))
    {
        printf("%d is a prime number.\n", num);
    }
    else
    {
        printf("%d is not a prime number.\n", num);
    }
    
    return 0;
}