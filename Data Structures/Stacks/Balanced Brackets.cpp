#include <bits/stdc++.h>

using namespace std;

void solve() {
    string s; cin >> s;
    stack<char> st;
    for(int i = 0; i < s.size(); i++) {
        if(st.empty()) {
            st.push(s[i]);
        } else {
            if(s[i] == '[' || s[i] == '{' || s[i] == '(')
                st.push(s[i]);
            else {
                char c = st.top();
                if((s[i] == ']' && c == '[') || 
                (s[i] == '}' && c == '{') ||
                (s[i] == ')' && c == '('))
                    st.pop();
                else st.push(s[i]);
            }
        }
    }
    
    if(st.empty())
        cout << "YES\n";
    else
        cout << "NO\n";
}

int main() {
    
    int n; cin >> n;
    while(n--)
        solve();
    
    return 0;
}
