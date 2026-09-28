#include <stdio.h>
#include <string.h>

int isAnagram(char s[], char t[])
{
    int count[26] = {0};

    if (strlen(s) != strlen(t))
    {
        return 0;
    }

    for (int i = 0; s[i] != '\0'; i++)
    {
        count[s[i] - 'a']++;
        count[t[i] - 'a']--;
    }

    for (int i = 0; i < 26; i++)
    {
        if (count[i] != 0)
        {
            return 0;
        }
    }

    return 1;
}

int main()
{
    char s[] = "anagram";
    char t[] = "nagaram";
    if (isAnagram(s, t))
    {
        printf("The strings are anagrams.\n");
    }
    else
    {
        printf("The strings are not anagrams.\n");
    }

    /*
    TEST CASE 1:
    Input:
    s = "anagram"
    t = "nagaram"

    Expected Output:
    The strings are anagrams.


    TEST CASE 2:
    Input:
    s = "rat"
    t = "car"

    Expected Output:
    The strings are not anagrams.
    */

    return 0;
}