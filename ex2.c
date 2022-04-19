#include <stdio.h>

int inpow(int base, int exp)
{
    int result = 1;
    for (int i = 0; i < exp; i++)
    {
        result *= base;
    }
    return result;
}

int main()
{
    int base = 3, exponent = 4;

    int r = inpow(base, exponent);

    printf("%d\n", r);
    
    return 0;
}