#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int A, B, C;
    cin >> A >> B >> C;

    // Number of smiley faces using two '.' and one ')'
    int smileyWithDots = min(A / 2, C);

    // Number of smiley faces using one ':' and one ')'
    int smileyWithColon = min(B, C - smileyWithDots);

    // Total smiley faces formed
    int totalSmileyFaces = smileyWithDots + smileyWithColon;

    cout << totalSmileyFaces << endl;

    return 0;
}
