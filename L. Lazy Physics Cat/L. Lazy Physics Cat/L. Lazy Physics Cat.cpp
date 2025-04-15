#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    const double PI = acos(-1.0);

    int T;
    cin >> T;
    cout << fixed << setprecision(6);
    while (T--) {
        double L, A;
        cin >> L >> A;
        // Radius
        double R = L;
        // Sector area = (A/360) * π R^2
        double sector = PI * R * R * (A / 360.0);
        // Triangle area = 1/2 * R^2 * sin(A in radians)
        double rad = A * PI / 180.0;
        double triangle = 0.5 * R * R * sin(rad);
        // Shaded segment = sector - triangle
        double shaded = sector - triangle;
        cout << shaded << "\n";
    }
    return 0;
}
