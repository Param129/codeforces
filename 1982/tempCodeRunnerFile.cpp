#include <iostream>
using namespace std;

class FlowerOperations {
private:
    long long rose, lily, daisy;

    // Method to perform operations as per the described logic
    long long performOperations() {
        while (rose != 1) {
            long long p = ((rose / lily) + 1) * lily - rose;
            
            if (daisy < p) {
                return rose + daisy;
            }
            
            daisy -= p;
            rose += p;
            
            while (rose % lily == 0) {
                rose /= lily;
            }
        }
        
        return daisy % (lily - 1) + 1;
    }

public:
    // Method to handle input and process each test case
    void main() {
        ios_base::sync_with_stdio(false);
        cin.tie(nullptr);

        int bouquet;
        cin >> bouquet;

        while (bouquet-- > 0) {
            cin >> rose >> lily >> daisy;
            
            cout << performOperations() << endl;
        }
    }
};

// Entry point of the program
int main() {
    FlowerOperations flowerOps;
    flowerOps.main();
    return 0;
}
