#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    vector<string> initial(n + 1);
    for (int i = 1; i <= n; i++) {
        cin >> initial[i];
    }

    int m;
    cin >> m;
    vector<int> prefixes(n + 1, 0);
    vector<int> base(n + 1);
    for (int i = 1; i <= n; i++) {
        base[i] = i;
    }

    for (int i = 0; i < m; i++) {
        int aj, bj;
        cin >> aj >> bj;
        prefixes[aj] = prefixes[bj] + 1;
        base[aj] = base[bj];
    }

    // Construct the final nickname of participant 1
    string result;
    int cnt = prefixes[1];
    int b = base[1];
    for (int i = 0; i < cnt; i++) {
        result += "I_love_";
    }
    result += initial[b];

    cout << result << endl;
    return 0;
}