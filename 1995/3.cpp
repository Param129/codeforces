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

#define int long long

signed main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        int m;
        cin>>n>>m;

        vector<int>a(n),b(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        for(int i=0;i<n;i++){
            cin>>b[i];
        }

        map<int,int>mp;
        for(int i=0;i<n;i++){
            mp[a[i]]=b[i];
        }

        int ans=0;
        for(auto it=mp.begin();it!=mp.end();it++){
            int key=it->first;
            int c1=it->second;
            int c2=0;

            auto next=it;
            next++;

            if(next->first!=key+1){
                next=mp.end();
            }
            if(next!=mp.end()){
                c2=next->second;
            }

            int take1=min(c1,m/key);
            int rem= m - take1*key;
            int take2=0;

            if(next!=mp.end()){
                take2=min(c2,rem/(next->first));
            }

            ans=max(ans,take1*key+take2*(next->first));

            if(take1>0 && next!=mp.end()){
                int left=c2-take2;
                int leftmoney=rem-take2*(next->first);
                int mayrem=min(left,min(take1,leftmoney));
                take1-=mayrem;
                take2+=mayrem;

                ans=max(ans,take1*key+take2*(next->first));
            }
        }

        cout<<ans<<endl;
    }
    return 0;
}