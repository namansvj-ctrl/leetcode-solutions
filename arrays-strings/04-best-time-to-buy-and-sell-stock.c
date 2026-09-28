#include <stdio.h>

int maxProfit(int prices[], int n)
{
    int minPrice = prices[0];
    int maxProfit = 0;

    for (int i = 1; i < n; i++)
    {
        // Update the minimum price seen so far
        if (prices[i] < minPrice)
        {
            minPrice = prices[i];
        }

        // Calculate profit if we sell today
        int profit = prices[i] - minPrice;

        // Update maximum profit
        if (profit > maxProfit)
        {
            maxProfit = profit;
        }
    }

    return maxProfit;
}

int main()
{
    int prices[] = {7, 1, 5, 3, 6, 4};
    int n = 6;

    printf("Maximum profit: %d\n", maxProfit(prices, n));

    /*
    TEST CASE 1:
    Input:
    prices = [7,1,5,3,6,4]

    Expected Output:
    Maximum profit: 5


    TEST CASE 2:
    Input:
    prices = [7,6,4,3,1]

    Expected Output:
    Maximum profit: 0
    */

    return 0;
}