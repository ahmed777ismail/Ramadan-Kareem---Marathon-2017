#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    // Set of letters that look like themselves in a mirror
    static const bool mirrorable[26] = {
        /*A*/ true,  /*B*/ false, /*C*/ false, /*D*/ false, /*E*/ false,
        /*F*/ false, /*G*/ false, /*H*/ true,  /*I*/ true,  /*J*/ false,
        /*K*/ false, /*L*/ false, /*M*/ true,  /*N*/ false, /*O*/ true,
        /*P*/ false, /*Q*/ false, /*R*/ false, /*S*/ false, /*T*/ true,
        /*U*/ true,  /*V*/ true,  /*W*/ true,  /*X*/ true,  /*Y*/ true,
        /*Z*/ false
    };

    int T;
    cin >> T;
    while (T--) {
        string s;
        cin >> s;
        int n = s.size();
        bool ok = true;
        for (int i = 0; i < (n + 1) / 2; i++) {
            char a = s[i], b = s[n - 1 - i];
            if (a != b) {
                ok = false;
                break;
            }
            if (!mirrorable[a - 'A']) {
                ok = false;
                break;
            }
        }
        cout << (ok ? "yes\n" : "no\n");
    }
    return 0;
}
