# Problem: Valid Parentheses (Easy)

**Link:** https://leetcode.com/problems/valid-parentheses/

## Approach

I used a stack to keep track of opening brackets. Whenever an
opening bracket is encountered, it is pushed onto the stack.
When a closing bracket appears, it is compared with the most
recent opening bracket at the top of the stack.

If the brackets do not match or a closing bracket appears when
the stack is empty, the string is invalid. At the end, the stack
must also be empty for the parentheses to be valid.

## Complexity

- Time: O(n)
- Space: O(n)

## Notes

The stack follows the Last-In-First-Out (LIFO) principle. This
makes it suitable for matching nested brackets such as
"{[()]}".