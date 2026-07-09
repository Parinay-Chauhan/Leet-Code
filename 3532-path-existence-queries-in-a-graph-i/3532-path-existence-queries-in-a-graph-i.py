class Solution:
    def pathExistenceQueries(self, n: int, nums: List[int], maxDiff: int, queries: List[List[int]]) -> List[bool]:

        # Har node ka component number store karega
        comp = [0] * n

        # Component assign karna
        for i in range(1, n):
            if nums[i] - nums[i - 1] <= maxDiff:
                comp[i] = comp[i - 1]      # Same component
            else:
                comp[i] = comp[i - 1] + 1  # Naya component

        # Queries ka answer
        ans = []

        for u, v in queries:
            ans.append(comp[u] == comp[v])

        return ans