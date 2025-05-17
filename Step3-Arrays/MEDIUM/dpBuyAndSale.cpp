#include <iostream>
#include <vector>
using namespace std;

int maxProfit(vector<int> &prices)
{
    int profit = 0;
    int minBuyPrice = prices[0];
    int n = prices.size();

    for (int i = 1; i < n; i++)
    {
        int newProfit = prices[i] - minBuyPrice;
        profit = max(newProfit, profit);
        minBuyPrice = min(minBuyPrice, prices[i]);
    }

    return profit;
}

int main()
{
    // Test case 1: Regular price fluctuation
    vector<int> prices1 = {7, 1, 5, 3, 6, 4};
    cout << "Max profit for prices1: " << maxProfit(prices1) << endl; // Expected: 5

    // Test case 2: Decreasing prices
    vector<int> prices2 = {7, 6, 4, 3, 1};
    cout << "Max profit for prices2: " << maxProfit(prices2) << endl; // Expected: 0

    // Test case 3: Increasing prices
    vector<int> prices3 = {1, 2, 3, 4, 5};
    cout << "Max profit for prices3: " << maxProfit(prices3) << endl; // Expected: 4

    return 0;
}