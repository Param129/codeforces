#include <iostream>
using namespace std;

class FlowerOperations {
private:
    long long rose, lily, daisy;

    long long solve2(){
         do {
            long long tempValue = rose / lily;
            long long increment = (tempValue + 1) * lily - rose;
            
            if (daisy < increment) {
                return rose + daisy;
            }
            
            daisy -= increment;
            rose += increment;
            
            do {
                if (rose % lily == 0) {
                    rose /= lily;
                }
            } while (rose % lily == 0);
            
        } while (rose != 1);
        
        return daisy % (lily - 1) + 1;
    }

    long long solve1(){
        return solve2();
    }

    // Method to perform operations as per the described logic
    long long performOperations() {
       return solve1();
    }

public:
    // Method to handle input and process each test case
    void mainFunction() {
        ios_base::sync_with_stdio(false);
        cin.tie(nullptr);

        int count;
        cin >> count;

        while (count-- > 0) {
            cin >> rose >> lily >> daisy;
            
            cout << performOperations() << endl;
        }
    }
};

// Entry point of the program
int main() {
    FlowerOperations flowerOps;
    flowerOps.mainFunction();
    return 0;
}
