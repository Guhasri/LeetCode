class Solution(object):
    def pivotIndex(self, nums):
        """
        :type nums: List[int]
        :rtype: int
        """
        total=sum(nums)
        my_sum=0
        for i in range(0,len(nums)):
            if my_sum==(total-nums[i]-my_sum):
                return i
            my_sum+=nums[i]
        return -1
        