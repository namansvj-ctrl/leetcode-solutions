#include <stdio.h>

int binarySearch(int arr[], int n, int target)
{
    int left = 0;
    int right = n - 1;

    while (left <= right)
    {
        int mid = left + (right - left) / 2;

        if (arr[mid] == target)
        {
            return mid;
        }
        else if (arr[mid] < target)
        {
            left = mid + 1;
        }
        else
        {
            right = mid - 1;
        }
    }

    return -1;
}

int main()
{
    int arr[] = {1, 3, 5, 7, 9};
    int n = 5;
    int target = 7;

    int result = binarySearch(arr, n, target);

    printf("Target index: %d\n", result);

    /*
    TEST CASE 1:
    Input:
    arr = [1,3,5,7,9]
    target = 7

    Expected Output:
    Target index: 3


    TEST CASE 2:
    Input:
    arr = [1,3,5,7,9]
    target = 6

    Expected Output:
    Target index: -1
    */

    return 0;
}