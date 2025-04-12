#include <iostream>
#include <vector>
#include <numeric> // for std::gcd in C++17 and later
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;
    while (T--) {
        int N;
        cin >> N;
        vector<long long> x(N);
        long long sum = 0;
        long long g = 0;

        for (int i = 0; i < N; i++) {
            cin >> x[i];
            sum += x[i];
            if (i == 0)
                g = x[i];
            else
                g = std::gcd(g, x[i]);
        }

        cout << sum << " " << g << "\n";
    }

    return 0;
}
