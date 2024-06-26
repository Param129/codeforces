#include <iostream>
#include <algorithm>

using namespace std;

bool can_never_be_equal(int x1, int y1, int x2, int y2) {
    int min_before = min(x1, y1);
    int max_before = max(x1, y1);
    int min_after = min(x2, y2);
    int max_after = max(x2, y2);
    
    // Check if intervals do not fully overlap
    if (max(min_before, min_after) > min(max_before, max_after)) {
        return true; // They do not overlap fully
    } else {
        return false; // They overlap fully
    }
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        int x1, y1, x2, y2;
        cin >> x1 >> y1 >> x2 >> y2;

       if(y1==y2 && x2==x1){
        cout<<"YES"<<endl;
       }
       else if(x1<y1){
        if(x2<y2){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
       }
       else if(y1<x1){
        if(y2<x2){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
       }
    }

    return 0;
}
