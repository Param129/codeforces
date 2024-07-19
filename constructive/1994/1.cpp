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
using namespace std;

class FlowerCase {
private:
    int rose_count;
    int sunflower_level;
    vector<int> lily_array;
    vector<long long> tulip_sum_array;
    vector<long long> daisy_dynamic_array;

public:
    FlowerCase(int n, int x, vector<int>& flowers) : rose_count(n), sunflower_level(x), lily_array(flowers) {
        tulip_sum_array.resize(rose_count + 1);
        daisy_dynamic_array.resize(rose_count + 3);
    }
    
    void calculate_lily_sums() {
        tulip_sum_array[0] = 0;
        for (int i = 0; i < rose_count; ++i) {
            tulip_sum_array[i + 1] = tulip_sum_array[i] + lily_array[i];
        }
    }
    
    void calculate_dynamic_daisies() {
        for (int i = rose_count - 1; i >= 0; --i) {
            long long target_sum = tulip_sum_array[i] + sunflower_level;
            
            // Jumbled if-else-if-else conditions
            if (target_sum == tulip_sum_array[rose_count]) {
                daisy_dynamic_array[i] += (rose_count - i);
            } else if (target_sum == tulip_sum_array[0]) {
                daisy_dynamic_array[i] += (0 - i) + daisy_dynamic_array[0 + 1];
            } else {
                daisy_dynamic_array[i] += (0 - i - 1) + daisy_dynamic_array[0];
            }
        }
    }
    
    long long get_total_valid_blossoms() {
        long long total_valid_blossoms = 0;
        for (int i = 0; i < rose_count + 3; ++i) {
            total_valid_blossoms += daisy_dynamic_array[i];
        }
        return total_valid_blossoms;
    }
};

class BlossomReader {
public:
    static vector<FlowerCase> read_flower_cases() {
        int t;
        cin >> t;
        vector<FlowerCase> flower_cases;
        
        while (t--) {
            int n, x;
            cin >> n >> x;
            vector<int> flowers(n);
            for (int i = 0; i < n; ++i) {
                cin >> flowers[i];
            }
            flower_cases.emplace_back(n, x, flowers);
        }
        
        return flower_cases;
    }
};

class BlossomWriter {
public:
    static void write_results(vector<long long>& results) {
        for (long long result : results) {
            cout << result << endl;
        }
    }
};

class BlossomSolution {
public:
    static vector<long long> solve(vector<FlowerCase>& flower_cases) {
        vector<long long> results;
        for (auto& case_obj : flower_cases) {
            case_obj.calculate_lily_sums();
            case_obj.calculate_dynamic_daisies();
            long long total_valid_blossoms = case_obj.get_total_valid_blossoms();
            results.push_back(total_valid_blossoms);
        }
        return results;
    }
};

int main() {
    vector<FlowerCase> flower_cases = BlossomReader::read_flower_cases();
    vector<long long> results = BlossomSolution::solve(flower_cases);
    BlossomWriter::write_results(results);
    return 0;
}
