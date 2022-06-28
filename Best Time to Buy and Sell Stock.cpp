class Solution
{
public:
    int maxProfit(vector<int> &prices)
    {
        int minp = prices[0];
        int p = 0;
        for (int i = 0; i < prices.size(); i++)
        {
            p = max(p, prices[i] - minp);
            minp = min(prices[i], minp);
        }
        return p;
    }
};