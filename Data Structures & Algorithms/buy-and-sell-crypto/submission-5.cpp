class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int left = 0, right = 1;
        int maxP = 0;

        //[[10,1,5,6,7,1]

        while(right < prices.size())
        {
            if(prices[right] > prices[left])
            {
                int profit = prices[right] - prices[left];
                maxP = max(maxP, profit);
            }
            else
            {
                left = right;
            }

            right += 1;
        }

        return maxP;
    }
};
