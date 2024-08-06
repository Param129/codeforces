#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>

using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    
    vector<pair<int, int>> songs(n);
    long long total_size = 0;
    long long total_compressed_size = 0;

    for (int i = 0; i < n; ++i) {
        cin >> songs[i].first >> songs[i].second;
        total_size += songs[i].first;
        total_compressed_size += songs[i].second;
    }

    // Check if it's impossible to fit all songs even if fully compressed
    if (total_compressed_size > m) {
        cout << -1 << endl;
        return 0;
    }

    // If no compression is needed
    if (total_size <= m) {
        cout << 0 << endl;
        return 0;
    }

    // Calculate the amount of space we need to save
    long long space_needed = total_size - m;

    // Calculate the possible savings from compression
    vector<long long> savings;
    for (const auto& song : songs) {
        savings.push_back(song.first - song.second);
    }

    // Sort savings in descending order
    sort(savings.rbegin(), savings.rend());

    // Calculate the minimum number of compressions required
    long long saved_space = 0;
    int compressions = 0;
    for (long long save : savings) {
        saved_space += save;
        ++compressions;
        if (saved_space >= space_needed) {
            break;
        }
    }

    // If we could not save enough space
    if (saved_space < space_needed) {
        cout << -1 << endl;
    } else {
        cout << compressions << endl;
    }

    return 0;
}
