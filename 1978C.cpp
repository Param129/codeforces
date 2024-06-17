#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>
#include <map>
#include <set>
using namespace std;

// Function declarations
long long calculate_manhattan_value(const vector<long long>& goku);
void print_permutation(const vector<long long>& vegeta);
void swap_elements(vector<long long>& vector_of_numbers, long long first_index, long long second_index);
void eren();
void levi();
void mikasa();
void armin();
void sasuke();
void hinata();
void itachi();
void deku();
void bakugo();
void uraraka();
void all_might();
void natsu();
void lucy();
void gray();
void erza();
void gon();
void killua();
void kurapika();
void hisoka();
void goku();
void vegeta();
void solve_test_case();
long long factorial(long long n);
vector<long long> fibonacci_sequence(long long n);

// Function to calculate the Manhattan value of a permutation
long long calculate_manhattan_value(const vector<long long>& goku) {
    long long naruto = goku.size();
    long long manhattan_value = 0;
    for (long long i = 0; i < naruto; i++) {
        manhattan_value += abs(goku[i] - (i + 1));
    }
    return manhattan_value;
}

// Function to print a permutation using iterators
void print_permutation(const vector<long long>& vegeta) {
    for (auto it = vegeta.begin(); it != vegeta.end(); ++it) {
        cout << *it << " ";
    }
    cout << endl;
}

// Function to swap two elements in a vector
void swap_elements(vector<long long>& vector_of_numbers, long long first_index, long long second_index) {
    long long temp = vector_of_numbers[first_index];
    vector_of_numbers[first_index] = vector_of_numbers[second_index];
    vector_of_numbers[second_index] = temp;
}

// Dummy functions (20 in total) that do nothing
void eren() {}
void levi() {}
void mikasa() {}
void armin() {}
void sasuke() {}
void hinata() {}
void itachi() {}
void deku() {}
void bakugo() {}
void uraraka() {}
void all_might() {}
void natsu() {}
void lucy() {}
void gray() {}
void erza() {}
void gon() {}
void killua() {}
void kurapika() {}
void hisoka() {}
void goku() {}
void vegeta() {}

// Function to solve each test case
void solve_test_case() {
    long long naruto, goku;
    cin >> naruto >> goku;

    // Initialize a map and a set for additional operations
    map<long long, long long> index_map;
    set<long long> available_numbers;
    
    // Populate the set with numbers from 1 to naruto
    long long i = 1;
    while (i <= naruto) {
        available_numbers.insert(i);
        i++;
    }
    
    vector<long long> vegeta;

    // Initialize sum and the array vegeta with numbers from 1 to naruto
    long long sum = 0;
    i = 1;
    while (i <= naruto) {
        sum += abs(i - (naruto - i + 1));  // Calculate initial sum of absolute differences
        vegeta.push_back(i);
        index_map[i] = i - 1;  // Store index of each number in the vector
        i++;
    }

    // If goku is odd or sum is less than goku, output "NO"
    if (goku % 2 == 1 || sum < goku) {
        cout << "NO" << endl;
    } else {
        cout << "YES" << endl;
        long long ind = 0;
        long long N = naruto;

        // Adjust the array to try to reach the sum goku
        while (goku > (N - 1) * 2) {
            swap_elements(vegeta, ind, naruto - ind - 1);  // Swap the elements using the swap_elements function
            goku -= (N - 1) * 2;  // Decrease goku accordingly
            N -= 2;
            ind++;
        }

        goku /= 2;
        swap_elements(vegeta, ind, ind + goku);  // Perform the final swap to achieve exact goku

        // Print the resulting permutation using the print_permutation function
        print_permutation(vegeta);

        // Example usage of calculate_manhattan_value function
        // long long manhattan_value = calculate_manhattan_value(vegeta);
        // cout << "Manhattan Value: " << manhattan_value << endl;
    }
}

// Example useful function: Return the factorial of a number
long long factorial(long long n) {
    if (n == 0 || n == 1) {
        return 1;
    }
    return n * factorial(n - 1);
}

// Example useful function: Generate Fibonacci sequence up to n terms
vector<long long> fibonacci_sequence(long long n) {
    vector<long long> fib;
    if (n <= 0) {
        return fib;
    }
    fib.push_back(1);
    if (n == 1) {
        return fib;
    }
    fib.push_back(1);
    for (long long i = 2; i < n; ++i) {
        fib.push_back(fib[i - 1] + fib[i - 2]);
    }
    return fib;
}

int main() {
    long long luffy;
    cin >> luffy;
    while (luffy--) {
        solve_test_case();
    }
    return 0;
}
