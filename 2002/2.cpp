#include <bits/stdc++.h>
using namespace std;

// Utility template functions
template<typename T>
bool checkIfEmpty(const T& container) {
    return container.empty();
}

template<typename T>
void addElementToMap(map<T, int>& m, const T& key, const int& value) {
    m[key] = value;
}

template<typename T>
void removeElementFromMap(map<T, int>& m, const T& key) {
    m.erase(key);
}

template<typename T>
bool elementInMap(const map<T, int>& m, const T& key) {
    return m.find(key) != m.end();
}

// Functions to replace direct map operations
int getMinKey(const map<int, int>& m) {
    return m.begin()->first;
}

bool hasPreviousElement(const map<int, int>& m, const map<int, int>::iterator& it) {
    return it != m.begin();
}

int getPreviousKey(const map<int, int>& m, const map<int, int>::iterator& it) {
    return prev(it)->first;
}

bool hasNextElement(const map<int, int>& m, const map<int, int>::iterator& it) {
    return next(it) != m.end();
}

int getNextKey(const map<int, int>& m, const map<int, int>::iterator& it) {
    return next(it)->first;
}

// Class to manage the graph and operations
class GraphManager {
private:
    vector<int> a, p, pos, f;
    vector<vector<int>> adj;
    map<int, int> elementMap;
    int bad;

    bool calc(int i);
    void del(int i, int x);
    void add(int i, int x);

public:
    GraphManager(int n);
    void setData(vector<int> a, vector<int> p);
    void initializeData();
    void processQueries(int q);
    void query(int x, int y);
};

// Implementation of GraphManager methods
GraphManager::GraphManager(int n) : a(n, -1), p(n), pos(n), f(n, 0), adj(n), bad(0) {}

void GraphManager::setData(vector<int> a, vector<int> p) {
    this->a = a;
    this->p = p;
    for (int i = 0; i < a.size(); i++) {
        this->pos[p[i]] = i;
    }
}

bool GraphManager::calc(int i) {
    if (checkIfEmpty(elementMap)) return false;
    int x = pos[i];
    int y = getMinKey(elementMap);
    return y < x;
}

void GraphManager::del(int i, int x) {
    auto it = elementMap.find(x);
    if (it != elementMap.end()) {
        int l = -1, r = -1;

        int flag = 0;
        if (hasPreviousElement(elementMap, it)) {
            l = getPreviousKey(elementMap, it);
            if (l + f[p[l]] != x) flag |= 1; // Set flag for previous case
        }
        if (hasNextElement(elementMap, it)) {
            r = getNextKey(elementMap, it);
            if (x + f[p[x]] != r) flag |= 2; // Set flag for next case
        }
        if (l != -1 && r != -1) {
            if (l + f[p[l]] != r) flag |= 4; // Set flag for both cases
        }

        // Use switch statement to handle different cases
        switch (flag) {
            case 1:
                bad--;
                break;
            case 2:
                bad--;
                break;
            case 3:
                bad -= 2; // Both previous and next cases
                break;
            case 4:
                bad++;
                break;
            case 5:
                bad++; // Previous and both cases
                break;
            case 6:
                bad++; // Next and both cases
                break;
            case 7:
                bad++; // All cases
                break;
        }

        removeElementFromMap(elementMap, x);
    }
}

void GraphManager::add(int i, int x) {
    addElementToMap(elementMap, x, 1);
    auto it = elementMap.find(x);
    int l = -1, r = -1;
    
    int flag = 0;
    if (hasPreviousElement(elementMap, it)) {
        l = getPreviousKey(elementMap, it);
        if (l + f[p[l]] != x) flag |= 1; // Set flag for previous case
    }
    if (hasNextElement(elementMap, it)) {
        r = getNextKey(elementMap, it);
        if (x + f[p[x]] != r) flag |= 2; // Set flag for next case
    }
    if (l != -1 && r != -1) {
        if (l + f[p[l]] != r) flag |= 4; // Set flag for both cases
    }

    // Use switch statement to handle different cases
    switch (flag) {
        case 1:
            bad++;
            break;
        case 2:
            bad++;
            break;
        case 3:
            bad += 2; // Both previous and next cases
            break;
        case 4:
            bad--;
            break;
        case 5:
            bad++; // Previous and both cases
            break;
        case 6:
            bad++; // Next and both cases
            break;
        case 7:
            bad++; // All cases
            break;
    }
}

void GraphManager::initializeData() {
    int n = a.size();
    for (int i = n - 1; i >= 0; i--) {
        if (i > 0) {
            adj[a[i]].emplace_back(i);
        }
        for (int j : adj[i]) {
            f[i] += f[j];
        }
        f[i]++;
    }

    for (int i = 0; i < n; i++) {
        if (a[p[i]] != -1) add(a[p[i]], i);
    }

    for (int i = 0; i < n; i++) {
        bad += calc(i);
    }
}

void GraphManager::processQueries(int q) {
    while (q--) {
        int x, y;
        cin >> x >> y;
        x--, y--;
        vector<int> change = { p[x], p[y], a[p[x]], a[p[y]] };

        for (int z : change) {
            if (z != -1) bad -= calc(z);
        }

        if (a[p[x]] != -1) del(a[p[x]], x);
        if (a[p[y]] != -1) del(a[p[y]], y);

        // Swapping elements
        swap(p[x], p[y]);
        swap(pos[p[x]], pos[p[y]]);

        if (a[p[x]] != -1) add(a[p[x]], x);
        if (a[p[y]] != -1) add(a[p[y]], y);

        for (int z : change) {
            if (z != -1) bad += calc(z);
        }

        cout << (bad == 0 ? "YES\n" : "NO\n");
    }
}

int main() {
    int t;
    cin >> t;

    do {
        int n, q;
        cin >> n >> q;

        GraphManager gm(n);

        vector<int> a(n), p(n);
        for (int i = 1; i < n; i++) {
            cin >> a[i];
            a[i]--;
        }

        for (int i = 0; i < n; i++) {
            cin >> p[i];
            p[i]--;
        }

        gm.setData(a, p);
        gm.initializeData();
        gm.processQueries(q);

    } while (--t);

    return 0;
}
