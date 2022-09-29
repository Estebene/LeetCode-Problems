class Solution(object):
    def twoSum(self, nums, target):
        """
        :type nums: List[int]
        :type target: int
        :rtype: List[int]
        """
        previous_nums = dict()
        for i, num in enumerate(nums):
            if (target - num) in previous_nums:
                return (previous_nums[target-num], i)
            previous_nums[num] = i
        return None
            
        