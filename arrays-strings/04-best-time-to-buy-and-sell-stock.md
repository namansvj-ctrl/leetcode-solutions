# Problem: Best Time to Buy and Sell Stock (Easy)

**Link:** https://leetcode.com/problems/best-time-to-buy-and-sell-stock/

## Approach

I used a single-pass approach to keep track of the minimum
stock price seen so far. For each price, I calculate the profit
that would be obtained by selling on that day and update the
maximum profit whenever a larger profit is found.

## Complexity

- Time: O(n)
- Space: O(1)

## Notes

The stock must be bought before it is sold, so the array is
processed from left to right. If the prices continuously
decrease, the maximum profit remains 0 because no profitable
transaction is possible.