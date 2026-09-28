# Problem: Longest Common Prefix (Easy)

**Link:** https://leetcode.com/problems/longest-common-prefix/

## Approach

I compare the strings character by character using the first
string as the reference. For each character position, I check
whether all the other strings contain the same character.

When a mismatch or the end of a string is reached, the common
prefix ends at that position.

## Complexity

- Time: O(n × m)
- Space: O(1)

## Notes

For the input ["flower", "flow", "flight"], the common prefix
is "fl". If there is no common starting sequence, the result
is an empty string.