#include <stdio.h>
#include <string.h>

int isValid(char str[])
{
    char stack[10000];
    int top = -1;

    for (int i = 0; str[i] != '\0'; i++)
    {
        char ch = str[i];

        // Opening brackets are pushed onto the stack
        if (ch == '(' || ch == '[' || ch == '{')
        {
            top++;
            stack[top] = ch;
        }

        // Check closing brackets
        else if (ch == ')' || ch == ']' || ch == '}')
        {
            // No opening bracket available
            if (top == -1)
            {
                return 0;
            }

            char open = stack[top];
            top--;

            if ((ch == ')' && open != '(') ||
                (ch == ']' && open != '[') ||
                (ch == '}' && open != '{'))
            {
                return 0;
            }
        }
    }

    // Stack must be empty at the end
    return top == -1;
}

int main()
{
    char str[] = "()[]{}";

    if (isValid(str))
    {
        printf("Valid parentheses\n");
    }
    else
    {
        printf("Invalid parentheses\n");
    }

    /*
    TEST CASE 1:
    Input:
    "()[]{}"

    Expected Output:
    Valid parentheses


    TEST CASE 2:
    Input:
    "(]"

    Expected Output:
    Invalid parentheses
    */

    return 0;
}