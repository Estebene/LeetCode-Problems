class Solution:
    def maxProfit(self, prices: List[int]) -> int:
        n = len(prices)
        
        @lru_cache(None)
        def dp(i, canBuy):
            if i == n:
                return 0
            ans = dp(i+1, canBuy)  # Skip
            if canBuy:
                ans = max(ans, dp(i+1, False) - prices[i])  # Buy
            else:
                ans = max(ans, dp(i+1, True) + prices[i])  # Sell
            return ans
        
        return dp(0, True)