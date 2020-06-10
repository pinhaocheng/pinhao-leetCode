class Solution:
    def isPowerOfTwo(self, n: int) -> bool:
        #return math.log2(n)%1==0 if n>0 else False
        
        if n < 1: return False
        while n > 1:
            if n % 2 != 0: return False
            else: n /= 2
        return True