class Solution:
    def reverseWords(self, s: str) -> str:
        ans = ''
        for x in s.split():
            ans += x[::-1] + ' '
        return ans[:-1]
        