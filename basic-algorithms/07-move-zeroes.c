#include <stdio.h>

void moveZeroes(int arr[], int n)
{
    int position = 0;

    // Move all non-zero elements to the front
    for (int i = 0; i < n; i++)
    {
        if (arr[i] != 0)
        {
            arr[position] = arr[i];
            position++;
        }
    }

    // Fill the remaining positions with zero
    while (position < n)
    {
        arr[position] = 0;
        position++;
    }
}

void printArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    printf("\n");
}

int main()
{
    int arr[] = {0, 1, 0, 3, 12};
    int n = 5;

    moveZeroes(arr, n);

    printf("Array after moving zeroes: ");
    printArray(arr, n);

    /*
    TEST CASE 1:
    Input:
    [0,1,0,3,12]

    Expected Output:
    [1,3,12,0,0]


    TEST CASE 2:
    Input:
    [0,0,1]

    Expected Output:
    [1,0,0]
    */

    return 0;
}