#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int tt;
    cin >> tt;
    while (tt--) {
        int x1, y1, x2, y2;
        cin >> x1 >> y1 >> x2 >> y2;
        // check if they're in the same column or row
        cout << (x1 == x2 || y1 == y2 ? "YES" : "NO") << '\n';
    }
    return 0;
}
