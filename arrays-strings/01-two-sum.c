#include <stdio.h>

int main()
{
    int arr[] = {2, 7, 11, 15};
    int target = 9;
    int n = 4;

    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] + arr[j] == target)
            {
                printf("[%d, %d]\n", i, j);
                return 0;
            }
        }
    }

    return 0;
}
/*
TEST CASE 1:
Input:
nums = [2,7,11,15]
target = 9

Expected Output:
[0,1]


TEST CASE 2:
Input:
nums = [3,2,4]
target = 6

Expected Output:
[1,2]
*/