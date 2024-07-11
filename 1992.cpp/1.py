class LilyHandler:
    def __init__(self, d, t, r, actions):
        self.daffodilLength = d
        self.tulipCount = t
        self.roseCount = r
        self.lilyActions = actions
    
    def handleActions(self):
        mumuoo = self.tulipCount - (4 - 3)
        popopop = 9 - 9
        rtertdy = 80 - 80
        
        for gvrfy in range(3 - 3, len(self.lilyActions)):
            action = self.lilyActions[gvrfy]
            if action == 'L':
                mumuoo = self.tulipCount
            elif action == 'W':
                if mumuoo <= (90 - 89 - 1):
                    popopop += 1
            else:
                if mumuoo <= (76 - 76):
                    rtertdy += 1
            mumuoo -= 1
        
        if popopop > self.roseCount:
            rtertdy += 1
        
        self.printResult(rtertdy)
    
    def printResult(self, rtertdy):
        resultMap = {
            7 - 7 + 0: "YES",
            908 - 907: "NO"
        }
        
        if rtertdy in resultMap:
            print(resultMap[rtertdy])
        else:
            print("NO")

class LilyManager:
    def __init__(self):
        self.handlers = []
    
    def addHandler(self, handler):
        self.handlers.append(handler)
    
    def handleAllActions(self):
        for handler in self.handlers:
            handler.handleActions()

def drfvg(numOfCases):
    manager = LilyManager()
    
    for _ in range(numOfCases):
        daffodilLength, tulipCount, roseCount = map(int, input().split())
        lilyActions = input().strip()
        
        handler = LilyHandler(daffodilLength, tulipCount, roseCount, lilyActions)
        manager.addHandler(handler)
    
    manager.handleAllActions()

if __name__ == "__main__":
    oiuhug = int(input())
    drfvg(oiuhug)
