// https://leetcode.com/problems/best-time-to-buy-and-sell-stock/description/
class Solution
{
public:
    int maxProfit(vector<int> &prices)
    {
        // auto ii=prices.end();
        // --ii;
        // if(*ii==1){return 0;}
        // auto min=min_element(prices.begin(), prices.end());
        // return (*max_element(min,prices.end()))-(*(min_element(prices.begin(), prices.end()))); // to use the values of min and max we have to use pointers
        // // cos the max min elemnt fnc only points to the place the element is stored at
        // // we need to use * to use the value
        int max_profit = 0;
        int cheapest = *(prices.begin());
        for (int i = 1; i < prices.size(); i += 1)
        {
            // 2 cases here ; if present element is bigger or smaller
            if (prices[i] - cheapest > max_profit)
            {
                max_profit = prices[i] - cheapest;
            }
            if (prices[i] < cheapest)
            {
                cheapest = prices[i];
            }
        }
        return max_profit;
    }
};
//! too much googling went into , need to learn dynamic programming , not learn per say id reckon jus revise the old ass stuff