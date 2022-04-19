#include <stdio.h>
#include "myarray.h"

void printarray(int array[], int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("%3d", array[i]);
    }
    printf("\n");
}

void printreverse(int array[], int size)
{
    for (int i = size - 1; i >= 0; i--)
    {
        printf("%3d", array[i]);
    }
    printf("\n");
}

int findmax(int array[], int size)
{
    int max = array[0];
    for (int i = 1; i < size; i++)
    {
        if (array[i] > max)
        {
            max = array[i];
        }
    }
    return max;
}

int contains(int array[], int size, int value)
{
    for (int i = 0; i < size; i++)
    {
        if (array[i] == value)
        {
            return 1;
        }
    }
    return 0;
}