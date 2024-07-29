def solve_case(n, arr):
    operations = []
    
    while max(arr) > 0:
        if len(operations) >= 40:
            return [-1]  

        non_zero = [x for x in arr if x != 0]
        if len(non_zero) > 1 and (non_zero[0] % 2) != (non_zero[1] % 2):
            return [-1]  
        
        min_val, max_val = min(arr), max(arr)
        x = (min_val + max_val) // 2
        operations.append(x)
        arr = [abs(a - x) for a in arr]
    
    return [len(operations)] + operations


def main():
    t = int(input())
    for _ in range(t):
        n = int(input())
        arr = list(map(int, input().split()))
        result = solve_case(n, arr)
        if result[0] == -1:
            print(-1)
        else:
            print(result[0])
            print(*result[1:])
        

if __name__ == "__main__":
    main()