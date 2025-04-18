#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m;
    cin >> n >> m;

    vector<pair<int, int>> edges;
    edges.reserve(m);
    vector<int> deg(n + 1, 0);

    // Read edges and count degrees
    for (int i = 0; i < m; i++) {
        int a, b;
        cin >> a >> b;
        edges.emplace_back(a, b);
        deg[a]++;
        deg[b]++;
    }

    // Find a vertex u with minimal degree
    int u = 1;
    for (int i = 2; i <= n; i++) {
        if (deg[i] < deg[u]) {
            u = i;
        }
    }

    // Mark neighbors of u
    vector<char> isNeighbor(n + 1, 0);
    for (auto& e : edges) {
        if (e.first == u) {
            isNeighbor[e.second] = 1;
        }
        else if (e.second == u) {
            isNeighbor[e.first] = 1;
        }
    }

    // Build the answer: place policemen on all i != u and i not neighbor of u
    vector<int> ans(n + 1, 0);
    for (int i = 1; i <= n; i++) {
        if (i != u && !isNeighbor[i]) {
            ans[i] = 1;
        }
    }

    // Output
    for (int i = 1; i <= n; i++) {
        cout << ans[i] << (i < n ? ' ' : '\n');
    }

    return 0;
}
