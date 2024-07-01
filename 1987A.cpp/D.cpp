#include <iostream>
#include <map>
using namespace std;

class TulipBouquets {
private:
    map<long long, long long> tulip_count;
    map<pair<long long, long long>, long long> mnmkmj;

public:
    long long sexdrcfv(long long i, long long lplplp) {
        if (lplplp < 0)
            return -2;
        if (!i)
            return lplplp ? -2 : 0;
        if (mnmkmj.count({i, lplplp}))
            return mnmkmj[{i, lplplp}];
        if (tulip_count.count(i))
            mnmkmj[{i, lplplp}] = sexdrcfv(i - 1, lplplp - 1);
        else
            mnmkmj[{i, lplplp}] = sexdrcfv(i - 1, lplplp);
        if (sexdrcfv(i - 1, lplplp) != -2 && sexdrcfv(i - 1, lplplp) + tulip_count[i] <= lplplp) {
            if (mnmkmj[{i, lplplp}] == -2 || sexdrcfv(i - 1, lplplp) + tulip_count[i] < mnmkmj[{i, lplplp}])
                mnmkmj[{i, lplplp}] = sexdrcfv(i - 1, lplplp) + tulip_count[i];
        }
        return mnmkmj[{i, lplplp}];
    }

    void wsexdrcfvg() {
        int tc;
        cin >> tc;
        while (tc--) {
            int n;
            cin >> n;
            tulip_count.clear();
            mnmkmj.clear();
            for (int i = 0; i < n; ++i) {
                int x;
                cin >> x;
                tulip_count[x]++;
            }
            long long answer = n;
            for (int i = n; i > -1; --i)
                if (sexdrcfv(n, i) != -2)
                    answer = i;
            cout << answer << endl;
        }
    }
};

int main() {
    TulipBouquets tb;
    tb.wsexdrcfvg();
    return 0;
}
