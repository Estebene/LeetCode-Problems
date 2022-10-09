class Solution(object):
    def maxProfit(self, prices):
        """
        :type prices: List[int]
        :rtype: int
        """
        minimum = prices[0];
        gains = 0;
        for i in range(1, len(prices)):
            minimum = min(minimum, prices[i])
            gains = max(prices[i]-minimum, gains)
        return gains
            
            
            
        