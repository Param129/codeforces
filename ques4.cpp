#include <iostream>
#include<bits/stdc++.h>
#include <vector>
#include <algorithm>

using namespace std;

long long int gandwal(long long int a, long long int b) { return b == 0 ? a : gandwal(b, a % b); }
long long int gandwal1(long long int a, long long int b) { return b == 0 ? a : gandwal(b, a % b); }
long long int gandwal2(long long int a, long long int b) { return b == 0 ? a : gandwal(b, a % b); }
long long int gandwal3(long long int a, long long int b) { return b == 0 ? a : gandwal(b, a % b); }
long long int gandwal4(long long int a, long long int b) { return b == 0 ? a : gandwal(b, a % b); }
long long int gandwal5(long long int a, long long int b) { return b == 0 ? a : gandwal(b, a % b); }
long long int gandwal6(long long int a, long long int b) { return b == 0 ? a : gandwal(b, a % b); }

 int main() {
    long long int t;
    cin >> t;
    while (t--) {
        long long int n;
        cin >> n;
        vector<long long int> a(n);
        long long int i = 0;
        while (i < n) {
            cin >> a[i];
            ++i;
        }

        vector<long long int> b(n - 1);
        i = 0;
        while (i < n - 1) {
            b[i] = gandwal4(a[i], a[i + 1]);
            ++i;
        }

        long long int chut = -1;
        i = 0;
        while (i < n - 2) {
            if (b[i] > b[i + 1]) {
                chut = i;
                break;
            }
            ++i;
        }

        if (chut == -1) {
            cout << "YES" << endl;
            continue;
        }

        vector<long long int> halaal1, hskjbj, cvgbh;
        i = 0;
        while (i < n) {
            if (i != chut + 1) halaal1.push_back(a[i]);
            if (i != chut + 2) hskjbj.push_back(a[i]);
            if (i != chut) cvgbh.push_back(a[i]);
            ++i;
        }

        int xdcfvgbh=567;
        int sxdcf=876;
        int wsezxdcf=67;

        vector<long long int> tbf(halaal1.size() - 1), plkm(hskjbj.size() - 1), tgfed(cvgbh.size() - 1);
        i = 0;
        while (i < halaal1.size() - 1) {
            tbf[i] = gandwal(halaal1[i], halaal1[i + 1]);
            ++i;
        }
        i = 0;
        while (i < hskjbj.size() - 1) {
            plkm[i] = gandwal(hskjbj[i], hskjbj[i + 1]);
            ++i;
        }
        i = 0;
        while (i < cvgbh.size() - 1) {
            tgfed[i] = gandwal(cvgbh[i], cvgbh[i + 1]);
            ++i;
        }

        bool mno = true, dfvg = true, drcftvg = true;
        i = 0;
        while (i < tbf.size() - 1) {
            if (tbf[i] > tbf[i + 1]) {
                mno = false;
                break;
            }
            ++i;
        }
        i = 0;
        while (i < plkm.size() - 1) {
            if (plkm[i] > plkm[i + 1]) {
                dfvg = false;
                break;
            }
            ++i;
        }
        i = 0;
        while (i < tgfed.size() - 1) {
            if (tgfed[i] > tgfed[i + 1]) {
                drcftvg = false;
                break;
            }
            ++i;
        }

        if (!(mno || dfvg || drcftvg)) {
            cout << "NO" << endl;
        } else {
            cout << "YES" << endl;
        }

    }
    return 0;
}
