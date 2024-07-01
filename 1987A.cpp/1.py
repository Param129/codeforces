from collections import deque

class WonderfulTree:
    def __init__(self):
        self.n = 0
        self.animals = []
        self.children = [[] for _ in range(N)]
        self.operations = [0] * N
        self.targets = [[0] * N for _ in range(N)]

    def bfs(self, root):
        q = deque([root])
        
        while q:
            x = q.popleft()
            
            if not self.children[x]:
                for i in range(1, self.n + 1):
                    self.targets[x][i] = float('inf')
                self.operations[x] = 0
                continue
            
            sums = 0
            self.operations[x] = 0
            for j in self.children[x]:
                q.append(j)
            
            while q:
                j = q.popleft()
                self.bfs(j)
                self.operations[x] += self.operations[j]
                sums += self.animals[j]
            
            del_ = self.animals[x] - sums
            for i in range(1, self.n + 1):
                if del_ <= 0:
                    break
                for j in self.children[x]:
                    if del_ <= 0:
                        break
                    if self.targets[j][i] <= del_:
                        self.operations[x] += i * self.targets[j][i]
                        del_ -= self.targets[j][i]
                        self.targets[j][i] = 0
                    else:
                        self.operations[x] += i * del_
                        self.targets[j][i] -= del_
                        del_ = 0
            
            if del_ < 0:
                self.targets[x][1] = -del_
            
            for i in range(2, self.n + 1):
                nsum = 0
                for j in self.children[x]:
                    if self.targets[j][i - 1] == float('inf'):
                        nsum = float('inf')
                        break
                    nsum += self.targets[j][i - 1]
                self.targets[x][i] = nsum

    def solve(self):
        self.n = int(input())
        self.animals = list(map(int, input().split()))
        
        for i in range(1, self.n + 1):
            self.children[i].clear()
        
        for i in range(2, self.n + 1):
            f = int(input())
            self.children[f].append(i)
        
        self.bfs(1)
        print(self.operations[1])

if __name__ == "__main__":
    TC = int(input())
    while TC > 0:
        tree = WonderfulTree()
        tree.solve()
        TC -= 1
