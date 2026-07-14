class Solution {
public:
    int maxProfit(vector<int>& prices) {
        //Sliding window
        int best = 0, l = 0, r = 1, current = 0;
        //Iterate through the array
        while(r < prices.size())
        {
            //Store the current profits
            current = prices[r] - prices[l];
            //Check if current profit is more than best profits
            //If so, replace best
            if(current > 0 && current > best)
            {
                best = current;
                r++;
            } 
            //Check if negative, then iterate forward
            else if (current >= 0)
            {
                ++r;
            } 
            else 
            {
                l = r;
                ++r;
            }
        }
        return best;
    }
};
