class Solution:
    def maxProfit(self, prices: List[int]) -> int:
        #2 pointers
        l,r = 0, 1
        maxProfit = 0

        #goal is the find the biggest difference between indices Xvalue and Yvalue while Y > X

        #
        while r < len(prices):
            if prices[l] < prices[r]:
                profit = prices[r] - prices[l]
                maxProfit = max(profit, maxProfit)
            else:
                l = r
            r += 1

        return maxProfit

    #[5,6,8,3,4,2,1,5,7,8]
