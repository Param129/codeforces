import sys
import bisect

class TestCase:
    def __init__(self, n, x, a):
        self.n = n
        self.x = x
        self.a = a
        self.pre = [0] * (n + 1)
        self.dp = [0] * (n + 1)
        
    def preprocess(self):
        for i in range(self.n):
            self.pre[i + 1] = self.pre[i] + self.a[i]
    
    def calculate_dp(self):
        for i in range(self.n - 1, -1, -1):
            val = self.pre[i] + self.x
            idx = bisect.bisect_left(self.pre, val)
            
            if val == self.pre[idx]:
                self.dp[i] += (idx - i) + self.dp[idx + 1]
            elif idx == self.n + 1:
                self.dp[i] += (self.n - i)
            else:
                self.dp[i] += (idx - i - 1) + self.dp[idx]
    
    def get_total_ans(self):
        total_ans = 0
        for i in range(self.n + 1):
            total_ans += self.dp[i]
        return total_ans

class Solution:
    def __init__(self):
        self.test_cases = []
    
    def read_input(self):
        input = sys.stdin.read().split()
        index = 0
        t = int(input[index])
        index += 1
        
        for _ in range(t):
            n = int(input[index])
            x = int(input[index + 1])
            index += 2
            
            a = list(map(int, input[index:index + n]))
            index += n
            
            self.test_cases.append(TestCase(n, x, a))
    
    def solve(self):
        for case in self.test_cases:
            case.preprocess()
            case.calculate_dp()
            total_ans = case.get_total_ans()
            print(total_ans)

# Usage:
if __name__ == "__main__":
    solution = Solution()
    solution.read_input()
    solution.solve()
