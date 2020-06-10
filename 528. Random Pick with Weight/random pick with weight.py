class Solution:

    def __init__(self, w: List[int]):
        self.index = []
        index = 0
        for weight in w:
            index += weight
            self.index.append(index)
        self.index_total = index

    def pickIndex(self) -> int:
        random_num = self.index_total * random.random()
        start, end = 0, len(self.index)
        while start < end:
            mid_point = start + (end - start) // 2
            if random_num > self.index[mid_point]:
                start = mid_point + 1
            else:
                end = mid_point
        return start


# Your Solution object will be instantiated and called as such:
# obj = Solution(w)
# param_1 = obj.pickIndex()