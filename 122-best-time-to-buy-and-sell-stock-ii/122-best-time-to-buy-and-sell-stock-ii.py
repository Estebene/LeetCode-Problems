class Solution(object):
    def maxProfit(self, prices):
        """
        :type prices: List[int]
        :rtype: int
        """
        total, last = 0, prices[0]
        for price in prices[1:]:
            if price <= last:
                last = price
            else: 
                total += (price-last)
                last = price
        return total
        