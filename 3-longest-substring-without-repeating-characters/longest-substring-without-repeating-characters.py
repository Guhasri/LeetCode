class Solution:
    def lengthOfLongestSubstring(self, s: str) -> int:
        max_len=0
        temp=list()
        for i in s:
            if i not in temp:
                temp.append(i)
            else:
                max_len=max(max_len,len(temp))
                temp = temp[temp.index(i) + 1:]
                temp.append(i)
        max_len = max(max_len, len(temp)) 
        return max_len