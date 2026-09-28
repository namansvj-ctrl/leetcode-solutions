# Problem: Valid Anagram (Easy)

**Link:** https://leetcode.com/problems/valid-anagram/

## Approach

I used a frequency-counting array of size 26 to keep track
of the number of occurrences of each lowercase English letter.
Characters from the first string increase the count, while
characters from the second string decrease it.

If all 26 counts become zero, the two strings contain the same
characters with the same frequencies and are therefore anagrams.

## Complexity

- Time: O(n)
- Space: O(1)

## Notes

The problem contains only lowercase English letters, so an array
of 26 integers is sufficient. I also check the string lengths
first because strings with different lengths cannot be anagrams.