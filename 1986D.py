def main():
    import sys
    input = sys.stdin.read
    data = input().split()
    
    t = int(data[0])
    index = 1
    
    results = []
    
    for _ in range(t):
        n = int(data[index])
        index += 1
        
        s = data[index]
        index += 1
        
        if n == 2:
            if s[0] == '0':
                results.append(s[1])
                continue
            results.append(s)
            continue
        
        f = '0' in s
        
        if f:
            if n >= 4:
                results.append('0')
            else:
                if s[1] == '0':
                    a = int(s[0])
                    b = int(s[2])
                    ans = min(a + b, a * b)
                    results.append(str(ans))
                else:
                    results.append('0')
            continue
        
        ans = float('inf')
        
        for i in range(n - 1):
            v = []
            for j in range(n):
                if j == i:
                    val = int(s[j] + s[j + 1])
                    j += 1
                    v.append(val)
                else:
                    val = int(s[j])
                    v.append(val)
            
            love_u_shady = v[0]
            if love_u_shady == 1:
                love_u_shady = 0
            
            for val in v[1:]:
                if val == 1:
                    continue
                love_u_shady += val
            
            ans = min(ans, love_u_shady)
        
        results.append(str(ans))
    
    print("\n".join(results))

if __name__ == "__main__":
    main()
