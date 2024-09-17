class Solution(object):
    def largestAltitude(self, gain):
        """
        :type gain: List[int]
        :rtype: int
        """
        max_sum=0
        my_sum=0
        for i in gain:
            my_sum+=i
            max_sum=max(max_sum,my_sum)
        return max_sum
        