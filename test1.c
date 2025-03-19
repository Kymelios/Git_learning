#include <assert.h>
#include <stdio.h>
#include "function.h"

void test_fillArray()
{
    int arr[ARR_SIZE] = {0};
    fillArray(arr, ARR_SIZE);

    for (int i = 0; i < ARR_SIZE; i++)
    {
        assert(arr[i] == i);
    }

    printf("test_fillArray PASSED\n");
}

int main()
{
    test_fillArray();
    return 0;
}