# Problem: Two Sum (Easy)

**Link:** https://leetcode.com/problems/two-sum/

## Approach

I used a brute-force approach where every pair of elements is
checked to determine whether their sum is equal to the target.
When a matching pair is found, their indices are returned.

## Complexity

- Time: O(n²)
- Space: O(1)

## Notes

The same array element cannot be used twice. Therefore, the
second loop starts from i + 1 so that each pair is checked only once.