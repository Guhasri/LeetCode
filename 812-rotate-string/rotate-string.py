class Solution(object):
    def rotateString(self, s, goal):
        """
        :type s: str
        :type goal: str
        :rtype: bool
        """
        for i in range(len(s)):
            temp=s[i+1:]
            temp+=s[:i+1]
            if(temp==goal):
                return True
        return False
        