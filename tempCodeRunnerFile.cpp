void countSort(vector<int>& arr) {
//     int n = arr.size();
//     int max_element = *max_element(arr.begin(), arr.end());
//     vector<int> count(max_element + 1, 0);
//     vector<int> output(n);
//     for (int i = 0; i < n; i++)
//         count[arr[i]]++;
//     for (int i = 1; i <= max_element; i++)
//         count[i] += count[i - 1];
//     for (int i = n - 1; i >= 0; i--) {
//         output[count[arr[i]] - 1] = arr[i];
//         count[arr[i]]--;
//     }
//     for (int i = 0; i < n; i++)
//         arr[i] = output[i];
// }