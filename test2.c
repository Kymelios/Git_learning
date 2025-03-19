#include <assert.h>
#include <stdio.h>
#include "function.h"

void test_checkValue()
{
    int arr[ARR_SIZE] = {0};
    fillArray(arr, ARR_SIZE);
    assert(checkValue(arr, 101) == 1);

    printf("test_checkValue PASSED\n");
}

int main()
{
    test_checkValue();
    return 0;
}