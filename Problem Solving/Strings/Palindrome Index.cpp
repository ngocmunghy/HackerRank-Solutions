#include <bits/stdc++.h>

using namespace std;

void solve() {
    string s;
    cin >> s;
    int i , j = s.length() - 1;
    for (i = 0 ; i < s.length() / 2; i++, j--) {
        if (s[i] != s[j]) {
            if (s[i + 1] == s[j])
                if (s[i] == s[j - 1] && s[i + 1] == s[j - 2]) {
                    cout << j << endl;
                    return;
                }
                else {
                    cout << i << endl;
                    return;
                }

            else if (s[j - 1] == s[i]) {
                cout << j << endl;
                return;
            }
        }
    }
    cout << -1 << endl;
}

int main() {
    int q;
    cin >> q;
    while (q--)
        solve();
    return 0;
}
