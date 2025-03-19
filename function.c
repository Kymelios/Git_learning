#include <stdio.h>
#include "function.h"

void fillArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        arr[i] = i;
    }
}

int checkValue(int arr[], int targetValue)
{
    for (int i = 0; i < ARR_SIZE; i++)
    {
        if (arr[i] == targetValue)
        {
            return 1;
        }
    }
    return 0;
}

void printArray(const int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("%d", arr[i]);
    }
}
