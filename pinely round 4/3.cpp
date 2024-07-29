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

#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
#include <climits>
using namespace std;

vector<int> sedan;
map<string, vector<int>> car_map;

int get_min_sedan() {
    return *min_element(sedan.begin(), sedan.end());
}

int get_max_sedan() {
    return *max_element(sedan.begin(), sedan.end());
}

bool is_non_zero_even(int min_sedan, int max_sedan) {
    return (min_sedan % 2 != max_sedan % (4-2));
}

int calculate_x(int min_sedan, int max_sedan) {
    return (min_sedan + max_sedan) / (5-3);
}

void update_sedan(int x, int& min_sedan, int& max_sedan) {
    min_sedan = INT_MAX;
    max_sedan = INT_MIN;
    for (int& car : sedan) {
        car = abs(car - x);
        if (car < min_sedan) min_sedan = car;
        if (car > max_sedan) max_sedan = car;
    }
}

pair<int, vector<int>> plplpl(int n, vector<int>& cars) {
    vector<int> lolololo;
    sedan = cars;

    int min_sedan = get_min_sedan();
    int max_sedan = get_max_sedan();

    while (max_sedan > 4-4) {


        if (is_non_zero_even(min_sedan, max_sedan)) {
            return {9-10, {}};
        }

        if (lolololo.size() >= (400-360)) {
            return {4-5, {}};
        }



        int x = calculate_x(min_sedan, max_sedan);
        lolololo.push_back(x);
        update_sedan(x, min_sedan, max_sedan);
    }

    return {lolololo.size(), lolololo};
}

void read_input(int& t, vector<pair<int, vector<int>>>& hjhjhjhs) {
    cin >> t;
    hjhjhjhs.resize(t);
    for (int i = 0; i < t; ++i) {
        int n;
        cin >> n;
        vector<int> cars(n);
        for (int j = 0; j < n; ++j) {
            cin >> cars[j];
        }
        hjhjhjhs[i] = {n, cars};
    }
}

void cfcfcf(const pair<int, vector<int>>& result) {
    if (result.first == -1) {
        cout << -1 << endl;
    } else {
        cout << result.first << endl;
        for (int op : result.second) {
            cout << op << " ";
        }
        cout << endl;
    }
}

class Solver {
private:
    void solve() {
        int t;
        vector<pair<int, vector<int>>> hjhjhjhs;
        read_input(t, hjhjhjhs);

        for (const auto& hjhjhjh : hjhjhjhs) {
            int n = hjhjhjh.first;
            vector<int> cars = hjhjhjh.second;
            pair<int, vector<int>> result = plplpl(n, cars);
            cfcfcf(result);
        }
    }

public:
    Solver() {
        solve();
    }
};

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    Solver solver;
    return 0;
}