class Solution(object):
    def maxProfit(self, prices):
        """
        :type prices: List[int]
        :rtype: int
        """
        minimum = prices[0];
        gains = 0;
        for price in prices[1:]:
            if price < minimum:
                minimum = price
            elif (price - minimum) > gains:
                gains = price - minimum
        return gains
            
            
            
        