#include <assert.h>
#include <stdio.h>
#include <string.h>
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

void test_checkValue()
{
    int arr[ARR_SIZE] = {0};
    fillArray(arr, ARR_SIZE);
    assert(checkValue(arr, 12) == 1);

    printf("test_checkValue PASSED\n");
}

int main(int argc, char *argv[])
{
    if (argc < 2) {
        printf("Usage: %s <test_name>\n", argv[0]);
        return 1;
    }

    if (strcmp(argv[1], "test_fill") == 0) {
        test_fillArray();
    } else if (strcmp(argv[1], "test_check") == 0) {
        test_checkValue();
    } else {
        printf("Unknown test: %s\n", argv[1]);
        return 1;
    }

    return 0;
}