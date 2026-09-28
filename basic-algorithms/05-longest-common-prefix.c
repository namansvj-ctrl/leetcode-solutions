#include <stdio.h>
#include <string.h>

void longestCommonPrefix(char *strs[], int n, char result[])
{
    int i, j;

    // Start with the first string as the prefix
    strcpy(result, strs[0]);

    // Compare the prefix with every other string
    for (i = 1; i < n; i++)
    {
        j = 0;

        while (result[j] != '\0' &&
               strs[i][j] != '\0' &&
               result[j] == strs[i][j])
        {
            j++;
        }

        // End the prefix at the first mismatch
        result[j] = '\0';
    }
}

int main()
{
    char *strs[] = {"flower", "flow", "flight"};
    int n = 3;
    char result[100];

    longestCommonPrefix(strs, n, result);

    printf("Longest Common Prefix: %s\n", result);

    /*
    TEST CASE 1:
    Input:
    ["flower", "flow", "flight"]

    Expected Output:
    "fl"


    TEST CASE 2:
    Input:
    ["dog", "racecar", "car"]

    Expected Output:
    ""

    Explanation:
    There is no common prefix.
    */

    return 0;
}