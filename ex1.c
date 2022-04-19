#include <stdio.h>
#include "myarray.h"
#define SIZE 5

int main()
{
    int arr[SIZE] = {12, 7, -3, 4, 1};

    printarray(arr, SIZE);
    printreverse(arr, SIZE);

    int max = findmax(arr, SIZE);
    printf("Max: %d\n", max);

    int value = 5;
    if (contains(arr, SIZE, value))
    {
        printf("%d is in the array.\n", value);
    }
    else
    {
        printf("%d is not in the array.\n", value);
    }

    return 0;
}
