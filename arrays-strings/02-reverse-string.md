# Problem: Reverse String (Easy)

**Link:** https://leetcode.com/problems/reverse-string/

## Approach

I used the two-pointer technique to reverse the string in-place.
One pointer starts at the beginning and another starts at the end.
The characters at these positions are swapped, and the pointers
are moved toward the center until the entire string is reversed.

## Complexity

- Time: O(n)
- Space: O(1)

## Notes

The string must be modified in-place, so no additional array is
required. A temporary character variable is used during swapping.
The two-pointer technique makes the solution simple and efficient.