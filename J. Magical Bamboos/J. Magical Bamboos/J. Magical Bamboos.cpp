#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;
    while (T--) {
        int N;
        cin >> N;
        vector<ll> h(N);
        for (int i = 0; i < N; i++)
            cin >> h[i];

        bool ok = true;
        if (N == 1) {
            ok = true;
        }
        else if (N == 2) {
            // Can make them equal iff h[0] ≡ h[1] mod 2
            ok = ((h[0] & 1) == (h[1] & 1));
        }
        else {
            // N >= 3: need all same parity
            int p = h[0] & 1;
            for (int i = 1; i < N; i++) {
                if ((h[i] & 1) != p) {
                    ok = false;
                    break;
                }
            }
        }

        cout << (ok ? "yes\n" : "no\n");
    }

    return 0;
}
