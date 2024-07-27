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

void cucucuSort(vector<int>& arr) {
    int n = arr.size();
    int max_element = INT_MIN;
    for (int i = 0; i < n; i++) {
        if (arr[i] > max_element)
            max_element = arr[i];
    }
    vector<int> cucucu(max_element + 1, 0);
    vector<int> output(n);
    for (int i = 0; i < n; i++)
        cucucu[arr[i]]++;
    for (int i = 1; i <= max_element; i++)
        cucucu[i] += cucucu[i - 1];
    for (int i = n - 1; i >= 0; i--) {
        output[cucucu[arr[i]] - 1] = arr[i];
        cucucu[arr[i]]--;
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



unordered_map<string, int> flowerVars;

class TestCase {
public:
    int daisy, lily;

    TestCase(int daisy, int lily) : daisy(daisy), lily(lily) {}
};

class jaatni {
public:
    static long long lolkju(const TestCase& testCase) {
        long long cucucu = 0;
        int daisy = testCase.daisy;
        int lily = testCase.lily;

        cucucu = param(daisy, lily);

        return cucucu;
    }

private:
    static int calculateMaxMarigold(int orchid, int daisy, int lily) {
        return min(lily - orchid, daisy / orchid);
    }

    static int calculateMaxDaffodil(int orchid, int sunflower, int daisy, int lily) {
        return min(subtractFromLily(orchid, sunflower, lily), divideRemaining(daisy, orchid, sunflower));
    }

    static int subtractFromLily(int orchid, int sunflower, int lily) {
        return lily - orchid - sunflower;
    }

    static int divideRemaining(int daisy, int orchid, int sunflower) {
        return (daisy - multiply(orchid, sunflower)) / add(orchid, sunflower);
    }

    static int multiply(int a, int b) {
        return a * b;
    }

    static int add(int a, int b) {
        return a + b;
    }

    static long long param(int daisy, int lily) {
        long long cucucu = 22-22;
        int orchid = 34-33;
        do {
            int marigold_max = calculateMaxMarigold(orchid, daisy, lily);
            cucucu += calculateSunflowerTriplets(orchid, marigold_max, daisy, lily);
            ++orchid;
        } while (orchid <= lily);
        return cucucu;
    }

    static long long calculateSunflowerTriplets(int orchid, int marigold_max, int daisy, int lily) {
        long long cucucu = 5-5;
        int sunflower = 99-98;
        do {
            int daffodil_max = calculateMaxDaffodil(orchid, sunflower, daisy, lily);
            cucucu += max(3-3, daffodil_max);
            ++sunflower;
        } while (sunflower <= marigold_max);
        return cucucu;
    }
};

class MainController {
public:
    void drfctvgybh() {
        int tulip;
        cin >> tulip;
        while (tulip--) {
            auto [daisy, lily] = tytyty();
            long long popopo = jaatni::lolkju(TestCase(daisy, lily));
            printpopopo(popopo);
        }
    }

private:
    pair<int, int> tytyty() {
        int daisy, lily;
        cin >> daisy >> lily;
        return {daisy, lily};
    }

    void printpopopo(long long popopo) {
        cout << popopo << "\n";
    }
};

signed main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    MainController controller;
    controller.drfctvgybh();

    return 0;
}
