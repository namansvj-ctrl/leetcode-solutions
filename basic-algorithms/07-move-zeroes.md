# Problem: Move Zeroes (Easy)

**Link:** https://leetcode.com/problems/move-zeroes/

## Approach

I used a position variable to keep track of where the next
non-zero element should be placed. I first move all non-zero
elements to the beginning of the array while maintaining their
original order, then fill the remaining positions with zeroes.

## Complexity

- Time: O(n)
- Space: O(1)

## Notes

The non-zero elements must remain in their original relative
order. The solution modifies the array in-place without creating
another array.