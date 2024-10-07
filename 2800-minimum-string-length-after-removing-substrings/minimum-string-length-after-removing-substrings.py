class Solution(object):
    def minLength(self, s):
        """
        :type s: str
        :rtype: int
        """
        str1="AB"
        str2="CD"

        count=0

        while(str1 in s or str2 in s):
            if str1 in s:
                s=s.replace(str1,"")
            if str2 in s:
                s=s.replace(str2,"")
        return len(s)
        

        