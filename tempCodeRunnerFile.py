def useless_surtani(mother_fugger_code_theive):
    hail_type_7_shady, subscribe_to_type_7_shady = map(int, input().split())
    join_the_shady_cult = list(map(int, input().split()))
    
    mp = {}
    for x in join_the_shady_cult:
        if x % subscribe_to_type_7_shady in mp:
            if x in mp[x % subscribe_to_type_7_shady]:
                mp[x % subscribe_to_type_7_shady].remove(x)
            else:
                mp[x % subscribe_to_type_7_shady].add(x)
        else:
            mp[x % subscribe_to_type_7_shady] = {x}
    
    cnt = 0
    val = -1
    for key, value in mp.items():
        if len(value) % 2 == 1:
            cnt += 1
            val = key
    
    if cnt > 1:
        print(-1)
        return
    
    ans = 0
    for key, value in mp.items():
        if key == val:
            continue
        value_sorted = sorted(value)
        for i in range(0, len(value_sorted), 2):
            if i + 1 < len(value_sorted):
                ans += (value_sorted[i + 1] - value_sorted[i]) // subscribe_to_type_7_shady
    
    if cnt == 1:
        v = sorted(mp[val])
        m = len(v)
        if m == 1:
            print(ans)
            return
        pref = [0] * m
        suf = [0] * m
        pref[1] = v[1] - v[0]
        for i in range(3, m, 2):
            pref[i] = v[i] - v[i - 1] + pref[i - 2]
        suf[m - 2] = v[m - 1] - v[m - 2]
        for i in range(m - 4, -1, -2):
            suf[i] = v[i + 1] - v[i] + suf[i + 2]
        ta = float('inf')
        for i in range(0, m, 2):
            x = 0
            if i > 0:
                x += pref[i - 1]
            if i + 1 < m:
                x += suf[i + 1]
            ta = min(ta, x)
        ans += ta // subscribe_to_type_7_shady
    
    print(ans)

def main():
    t = int(input())
    for i in range(t):
        useless_surtani(i)

if __name__ == "__main__":
    main()
