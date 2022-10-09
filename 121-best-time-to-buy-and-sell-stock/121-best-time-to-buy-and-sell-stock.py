class Solution(object):
    def maxProfit(self, prices):
        """
        :type prices: List[int]
        :rtype: int
        """
        minimum = prices[0];
        gains = 0;
        for price in prices:
            minimum = min(minimum, price)
            gains = max(price-minimum, gains)
        return gains
            
            
            
        