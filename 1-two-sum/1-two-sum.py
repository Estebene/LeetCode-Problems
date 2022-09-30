class Solution(object):
    def twoSum(self, nums, target):
        """
        :type nums: List[int]
        :type target: int
        :rtype: List[int]
        """
        """
         previous_nums = dict()
        for i, num in enumerate(nums):
            if (target - num) in previous_nums:
                return (previous_nums[target-num], i)
            previous_nums[num] = i
        """
        for idx, num in enumerate(nums):
            for idx2, num2 in enumerate(nums):
                if num + num2 == target and idx != idx2:
                    return idx, idx2
        return None
            
        