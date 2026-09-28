# Problem: Binary Search (Easy)

**Link:** https://leetcode.com/problems/binary-search/

## Approach

I used the binary search technique on the sorted array.
Two pointers, left and right, represent the current search
range. The middle element is checked and half of the search
range is eliminated after every comparison.

## Complexity

- Time: O(log n)
- Space: O(1)

## Notes

Binary search requires the input array to be sorted. If the
middle element is smaller than the target, the search continues
on the right side. If it is larger, the search continues on the
left side. If the target is not found, -1 is returned.