class Solution(object):
    def twoSum(self, nums, target):
        """
        :type nums: List[int]
        :type target: int
        :rtype: List[int]
        """
        temp=dict()
        for i in range(len(nums)):
            if target-nums[i] in temp:
                return temp[target-nums[i]],i
            temp[nums[i]]=i
        return []
        