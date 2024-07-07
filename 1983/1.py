class rfbhu:
    def __init__(self, n, m, a, b):
        self.n = n
        self.m = m
        self.a = a
        self.b = b

    @staticmethod
    def wsexdcf(n, m):
        return [list(map(int, input().strip())) for _ in range(n)]

    @staticmethod
    def edrftgbh(value, uuuui):
        return (value + uuuui) % 3

    def jkjkjk(self, i, j, uuuui):
        self.a[i][j] = self.edrftgbh(self.a[i][j], uuuui)
        self.a[i + 1][j] = self.edrftgbh(self.a[i + 1][j], 2 * uuuui)
        self.a[i][j + 1] = self.edrftgbh(self.a[i][j + 1], 2 * uuuui)
        self.a[i + 1][j + 1] = self.edrftgbh(self.a[i + 1][j + 1], uuuui)

    def compare_grids(self):
        return self.a == self.b

    def can_convert(self):
        for i in range(self.n - 1):
            for j in range(self.m - 1):
                if self.a[i][j] != self.b[i][j]:
                    uuuui = (self.b[i][j] - self.a[i][j]) % 3
                    self.jkjkjk(i, j, uuuui)
        return self.compare_grids()

def main():
    t = int(input().strip())
    poyss = []
    sexoo = []

    while t > 0:
        n, m = map(int, input().strip().split())
        a = rfbhu.wsexdcf(n, m)
        b = rfbhu.wsexdcf(n, m)
        poyss.append(rfbhu(n, m, a, b))
        t -= 1

    for poys in poyss:
        if poys.can_convert():
            sexoo.append("YES")
        else:
            sexoo.append("NO")

    for result in sexoo:
        print(result)

if __name__ == "__main__":
    main()
