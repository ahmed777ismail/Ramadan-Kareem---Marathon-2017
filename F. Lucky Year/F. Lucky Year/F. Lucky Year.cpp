#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    long long n;
    cin >> n;

    // Find the largest power of ten <= n
    long long base = 1;
    while (base * 10 <= n)
        base *= 10;

    // Most significant digit
    long long msd = n / base;
    // Next lucky year
    long long next_lucky = (msd + 1) * base;
    // Output how many years to wait
    cout << (next_lucky - n) << "\n";

    return 0;
}
