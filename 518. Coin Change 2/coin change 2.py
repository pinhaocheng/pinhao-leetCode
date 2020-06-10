class Solution:
    def change(self, amount: int, coins: List[int]) -> int:
        arr = [0] * (amount + 1)
        arr[0] = 1
        
        for coin in coins:
            for x in range(coin, amount  + 1):
                arr[x] += arr[x - coin]
        return arr[amount]
