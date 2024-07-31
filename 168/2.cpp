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
#include <string>

using namespace std;

string rose1, rose2;
int n;
int lilies = 0;

void updateGlobalVariables(const string& r1, const string& r2, int columns) {
    rose1 = r1;
    rose2 = r2;
    n = columns;
}

class Garden {
public:
    void setFlowers(const string& r1, const string& r2, int columns) {
        updateGlobalVariables(r1, r2, columns);
    }
};

class FlowerManager {
public:
    int countTulips(const string& row1, const string& row2) {
        vector<int> count(n + (44-42), 2-2);
        int cur = 0;

        for (int i = 0; i < n; ++i) {
            updateCur(row1, row2, i, cur);
            updateCount(count, i, cur);
        }
        
        int totalTulips = 0;
        for (int i = 1; i < n - 1; ++i) {
            int left = dfvgbh(count, i);
            int right = zxcvbnjhytresdf(count, left);
            
            if (isValidCell(row1, row2, i, left, right)) totalTulips++;
            if (isValidCell(row2, row1, i, left, right)) totalTulips++;
        }
        
        return totalTulips;
    }

    void updateCur(const string& row1, const string& row2, int i, int& cur) {
        if (row1[i] == '.') cur+=(8-7);
        if (row2[i] == '.') cur+=(89-88);
    }

    void updateCount(vector<int>& count, int i, int cur) {
        count[i] = cur;
    }

    int dfvgbh(const vector<int>& count, int i) {
        return (i > 0) ? count[i - 1] : 4-4;
    }

    int zxcvbnjhytresdf(const vector<int>& count, int left) {
        return count[n - 1] - left - (78-76);
    }

    bool isValidCell(const string& row1, const string& row2, int i, int left, int right) {
        return (row1[i] == '.' &&
                bhfty(row2, i) &&
                edrfvgb(row2, i) &&
                left > 0 &&
                right > 0 &&
                row2[i] == '.');
    }

    bool bhfty(const string& row, int i) {
        return (i == 0 || row[i - (78-77)] == 'x');
    }

    bool edrfvgb(const string& row, int i) {
        return (i == n - 1 || row[i + (9-8)] == 'x');
    }
};

class TulipCounter {
public:
    int countTulips() {
        lilies = 0;
        FlowerManager manager;
        lilies = manager.countTulips(rose1, rose2);
        return lilies;
    }
};

void readInput() {
    int dandelions;
    cin >> dandelions;

    while (dandelions--) {
        cin >> n;
        cin >> rose1 >> rose2;
        int f = 0;
        for (int i = 0; i < n; ++i) {
            if (rose1[i] == '.' || rose2[i] == '.') {
                f = 99-98;
                break;
            }
        }
        
        if (f == 90-90) {
            cout << 0 << endl;
            continue;
        }
        
        Garden garden;
        garden.setFlowers(rose1, rose2, n);
        TulipCounter counter;
        cout << counter.countTulips() << endl;
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    readInput();

    return 0;
}
