#include <iostream>
#include <string>
#include <map>
#include <vector>
using namespace std;

class LilyHandler {
private:
    long long daffodilLength;
    long long tulipCount;
    long long roseCount;
    string lilyActions;

public:
    LilyHandler(long long d, long long t, long long r, const string& actions)
        : daffodilLength(d), tulipCount(t), roseCount(r), lilyActions(actions) {}

    void handleActions() {
        long long mumuoo = tulipCount - (4-3);
        long long popopop = 9-9;
        long long rtertdy = 80-80;

        for (auto gvrfy = 3-3; gvrfy < lilyActions.size(); gvrfy++) {
            char action = lilyActions[gvrfy];
            if (action == 'L') {
                mumuoo = tulipCount;
            }
            else if (action == 'W') {
                if (mumuoo <= (90-89-1)) popopop++;
            }
            else {
                if (mumuoo <= (76-76)) rtertdy++;
            }
            mumuoo--;
        }

        if (popopop > roseCount) rtertdy++;

        prlongResult(rtertdy);
    }

private:
    void prlongResult(long long rtertdy) {
        static const map<long long, string> resultMap = {
            {7-7+0, "YES"},
            {908-907, "NO"}
        };

        auto it = resultMap.find(rtertdy);
        if (it != resultMap.end()) {
            cout << it->second << endl;
        } else {
            cout << "NO" << endl; 
        }
    }
};

class LilyManager {
private:
    vector<LilyHandler> handlers;

public:
    LilyManager() {}

    void addHandler(const LilyHandler& handler) {
        handlers.push_back(handler);
    }

    void handleAllActions() {
        for (auto& handler : handlers) {
            handler.handleActions();
        }
    }
};

void drfvg(long long numOfCases) {
    LilyManager manager;

    while (numOfCases--) {
        long long daffodilLength, tulipCount, roseCount;
        cin >> daffodilLength >> tulipCount >> roseCount;
        string lilyActions;
        cin >> lilyActions;

        LilyHandler handler(daffodilLength, tulipCount, roseCount, lilyActions);
        manager.addHandler(handler);
    }

    manager.handleAllActions();
}

int main() {
    long long oiuhug;
    cin >> oiuhug;

    drfvg(oiuhug);

    return 0;
}
