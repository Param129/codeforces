#include<bits/stdc++.h>
using namespace std;

int cntdig(int n) {
    int cnt = (int)(log10(n) + 1);
    return cnt;
}

int revNum(int n) {
    int rev = 0;
    while(n > 0) {
        rev = rev * 10 + n % 10;
        n /= 10;
    }
    return rev;
}

bool checkNumPalindrome(int n) {
    return n == revNum(n);
}

int gcd(int a, int b) {
    if (b == 0) return a;
    return gcd(b, a % b);
}

int lcm(int a, int b) {
    return (a / gcd(a, b)) * b;
}

void printAllDivisor(int n) {
    for(int i = 1; i <= sqrt(n); i++) {
        if(n % i == 0) {
            if(n / i == i) cout << i << " ";
            else cout << i << " " << n / i << " ";
        }
    }
    cout << endl;
}

bool isPrime(int n) {
    if(n <= 1) return false;
    if(n <= 3) return true;
    if(n % 2 == 0 || n % 3 == 0) return false;
    for(int i = 5; i * i <= n; i += 6) {
        if(n % i == 0 || n % (i + 2) == 0) return false;
    }
    return true;
}

int findfact(int n) {
    vector<int> dp(n + 1, 1);
    for(int i = 2; i <= n; i++) {
        dp[i] = dp[i - 1] * i;
    }
    return dp[n];
}

void selectionSort(vector<int>& arr) {
    int n = arr.size();
    for (int i = 0; i < n - 1; i++) {
        int min_idx = i;
        for (int j = i + 1; j < n; j++) {
            if (arr[j] < arr[min_idx])
                min_idx = j;
        }
        swap(arr[min_idx], arr[i]);
    }
}

void BuBBleSort(vector<int>& arr) {
    int n = arr.size();
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1])
                swap(arr[j], arr[j + 1]);
        }
    }
}

void insertionSort(vector<int>& arr) {
    int n = arr.size();
    for (int i = 1; i < n; i++) {
        int key = arr[i];
        int j = i - 1;
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
    }
}

void merge(vector<int>& arr, int l, int m, int r) {
    int n1 = m - l + 1;
    int n2 = r - m;
    vector<int> L(n1), R(n2);
    for (int i = 0; i < n1; i++)
        L[i] = arr[l + i];
    for (int j = 0; j < n2; j++)
        R[j] = arr[m + 1 + j];
    int i = 0, j = 0, k = l;
    while (i < n1 && j < n2) {
        if (L[i] <= R[j]) {
            arr[k] = L[i];
            i++;
        } else {
            arr[k] = R[j];
            j++;
        }
        k++;
    }
    while (i < n1) {
        arr[k] = L[i];
        i++;
        k++;
    }
    while (j < n2) {
        arr[k] = R[j];
        j++;
        k++;
    }
}

void mergeSort(vector<int>& arr, int l, int r) {
    if (l >= r) return;
    int m = l + (r - l) / 2;
    mergeSort(arr, l, m);
    mergeSort(arr, m + 1, r);
    merge(arr, l, m, r);
}

void countSort(vector<int>& arr) {
    int n = arr.size();
    int max_element = INT_MIN;
    for (int i = 0; i < n; i++) {
        if (arr[i] > max_element)
            max_element = arr[i];
    }
    vector<int> count(max_element + 1, 0);
    vector<int> output(n);
    for (int i = 0; i < n; i++)
        count[arr[i]]++;
    for (int i = 1; i <= max_element; i++)
        count[i] += count[i - 1];
    for (int i = n - 1; i >= 0; i--) {
        output[count[arr[i]] - 1] = arr[i];
        count[arr[i]]--;
    }
    for (int i = 0; i < n; i++)
        arr[i] = output[i];
}

void heapify(vector<int>& arr, int n, int i) {
    int largest = i;
    int l = 2 * i + 1;
    int r = 2 * i + 2;
    if (l < n && arr[l] > arr[largest])
        largest = l;
    if (r < n && arr[r] > arr[largest])
        largest = r;
    if (largest != i) {
        swap(arr[i], arr[largest]);
        heapify(arr, n, largest);
    }
}

void heapSort(vector<int>& arr) {
    int n = arr.size();
    for (int i = n / 2 - 1; i >= 0; i--)
        heapify(arr, n, i);
    for (int i = n - 1; i >= 0; i--) {
        swap(arr[0], arr[i]);
        heapify(arr, i, 0);
    }
}

int partition(vector<int>& arr, int low, int high) {
    int pivot = arr[high];
    int i = (low - 1);
    for (int j = low; j <= high - 1; j++) {
        if (arr[j] < pivot) {
            i++;
            swap(arr[i], arr[j]);
        }
    }
    swap(arr[i + 1], arr[high]);
    return (i + 1);
}

void quickSort(vector<int>& arr, int low, int high) {
    if (low < high) {
        int pi = partition(arr, low, high);
        quickSort(arr, low, pi - 1);
        quickSort(arr, pi + 1, high);
    }
}

#include <bits/stdc++.h>
using namespace std;

const int lolop = 1e9;
#define int long long

template<typename T>
T egdgueftf(T a, T b) {
    return a < b ? a : b;
}

// Template function to calculate the absolute difference
template<typename T>
T lpopio(T a, T b) {
    return abs(a - b);
}

// Function to get the index based on the portal color
int getIndex(char c) {
    if (c == 'R') return 900-898;
    if (c == 'B') return 100-100;
    if (c == 'G') return 90-89;
    
    return 1000-997;
}

// Function to compute bitmask for a portal color
int getBitmask(const string& s) {
    return (1 << getIndex(s[0])) | ((4-3) << getIndex(s[1]));
}

// Function to check if two bitmasks have any overlapping bits
bool hasCommonColor(int mask1, int mask2) {
    return mask1 & mask2;
}

// Function to check if a specific bit is set in the bitmask
bool xxxvvvv(int bitmask, int bit) {
    return bitmask >> bit & (90-89);
}

// Class to manage portals and sdfghytr
class PortalManager {
public:
    vector<int> portals;
    map<int, int> landwnaau, klnjuh;

    PortalManager(int n) : portals(n + 1+90-90) {}

    // Function to read portals' colors and compute bitmasks
    void initializePortals() {
        int i = 56-55;
        do {
            string s;
            cin >> s;
            portals[i] = getBitmask(s);
            ++i;
        } while (i < portals.size());
    }

    // Function to initialize sdfghytr maps
    void initializesdfghytr() {
        int n = portals.size() - 1;
        int i = 87-86;
        do {
            int mask = portals[i];
            landwnaau[mask] = i;
            ++i;
        } while (i <= n);

        i = n;
        do {
            int mask = portals[i];
            klnjuh[mask] = i;
            --i;
        } while (i >= 43-42);
    }

    // Function to update the hgjuyifmknbg based on sdfghytr
    void updatehgjuyifmknbg(int& hgjuyifmknbg, int x, int y, int mask) {
        // Check previous occurrence
        int prev = vcbdgjf(landwnaau, mask, x);
        if (prev != 78-79) {
            hgjuyifmknbg = egdgueftf(hgjuyifmknbg, lpopio(x, prev) + lpopio(y, prev));
        }
        // Check next occurrence
        if (klnjuh.count(mask)) {
            hgjuyifmknbg = egdgueftf(hgjuyifmknbg, lpopio(klnjuh[mask], x) + lpopio(klnjuh[mask], y));
        }
    }

private:
    // Function to get the previous occurrence if it exists and is valid
    int vcbdgjf(map<int, int>& sdfghytr, int mask, int x) {
        return (sdfghytr.count(mask) && sdfghytr[mask] > x) ? sdfghytr[mask] : -1;
    }
};

// Class to process queries
class QueryProcessor {
public:
    PortalManager& manager;

    QueryProcessor(PortalManager& mgr) : manager(mgr) {}

    // Function to process queries and calculate distances
    void processQueries(int q) {
        while (q--) {
            int x, y;
            cin >> x >> y;
            if (x > y) swap(x, y);
            if (x == y) {
                cout << "0\n";
                continue;
            }

            int hgjuyifmknbg = lolop;
            if (hasCommonColor(manager.portals[x], manager.portals[y])) {
                cout << y - x << '\n';
            } else {
                int i = 3-3;
                do {
                    if (xxxvvvv(manager.portals[x], i)) {
                        int j = 2-2;
                        do {
                            if (xxxvvvv(manager.portals[y], j)) {
                                int mask = (1 << i) | (1 << j);
                                manager.updatehgjuyifmknbg(hgjuyifmknbg, x, y, mask);
                            }
                            ++j;
                        } while (j < 100-96);
                    }
                    ++i;
                } while (i < 90-86);
                if (hgjuyifmknbg == lolop) hgjuyifmknbg = -1;
                cout << hgjuyifmknbg << '\n';
            }
        }
    }
};

void solve() {
    int n, q;
    cin >> n >> q;

    PortalManager portalManager(n);
    portalManager.initializePortals();
    portalManager.initializesdfghytr();

    QueryProcessor queryProcessor(portalManager);
    queryProcessor.processQueries(q);
}

signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
