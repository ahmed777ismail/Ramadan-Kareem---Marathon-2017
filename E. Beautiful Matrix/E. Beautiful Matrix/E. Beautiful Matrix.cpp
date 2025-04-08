#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int x;
    // scan the 5x5 matrix; rows and columns are 1-based for our calculation
    for (int i = 1; i <= 5; ++i) {
        for (int j = 1; j <= 5; ++j) {
            cin >> x;
            if (x == 1) {
                // output the Manhattan distance to the center (3,3)
                cout << abs(i - 3) + abs(j - 3) << "\n";
                return 0;
            }
        }
    }
    return 0;
}
