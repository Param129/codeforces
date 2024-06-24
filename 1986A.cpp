#include <iostream>
#include <algorithm>
#include <vector>
#include <cmath>

using namespace std;

int main() {
    int t;
    cin >> t;

    vector<int> results(t);
    
    for (int i = 0; i < t; ++i) {
        int x1, x2, x3;
        cin >> x1 >> x2 >> x3;
        
        // Put the coordinates in an array
        int coords[3] = {x1, x2, x3};
        
        // Sort the array to find the median
        sort(coords, coords + 3);
        
        // The median is the second element in the sorted array
        int median = coords[1];
        
        // Calculate the total distance
        int total_distance = abs(median - x1) + abs(median - x2) + abs(median - x3);
        
        // Store the result
        cout<<total_distance<<endl;
    }
    
    // Output all results
    // for (const int& result : results) {
    //     cout << result << endl;
    // }

    return 0;
}
