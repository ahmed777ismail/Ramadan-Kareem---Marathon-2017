#include <bits/stdc++.h>
using namespace std;

int main() {
    // Optimize I/O
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    // Read input string
    string S;
    cin >> S;
    int n = S.size();

    // A[k] = count of '(' followed by ':' up to position k-1
    vector<int> A(n, 0);
    for (int k = 1; k < n; k++) {
        A[k] = A[k - 1] + (S[k - 1] == '(' && S[k] == ':');
    }

    // B[k] = count of ':)' from position k to end
    vector<int> B(n + 1, 0);  // B[n] = 0 for convenience when k = n-1
    for (int k = n - 2; k >= 0; k--) {
        B[k] = B[k + 1] + (S[k] == ':' && S[k + 1] == ')');
    }

    // Find maximum number of smiley faces
    int max_smiley = 0;
    for (int k = 0; k < n; k++) {
        int value = A[k] + B[k + 1];  // Smiley faces in mirrored prefix + suffix
        // Add boundary smiley if conditions are met
        if (k < n - 1 && S[0] == ':' && S[k + 1] == ')') {
            value += 1;
        }
        max_smiley = max(max_smiley, value);
    }

    // Output result
    cout << max_smiley << endl;
    return 0;
}