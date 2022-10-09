class Solution(object):
    def maxProfit(self, prices):
        """
        :type prices: List[int]
        :rtype: int
        """
        minimum = prices[0]
        gains = 0
        i = 1
        while (i < len(prices)):
            minimum = min(minimum, prices[i])
            gains = max(prices[i]-minimum, gains)
            i+=1
        return gains
            
            
            
        