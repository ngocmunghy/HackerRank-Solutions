#include<bits/stdc++.h>

using namespace std;

void solve() {
    string s;
    cin >> s;
    
    unordered_map <string, int> umap;
    unordered_map <string, int>::iterator it;
    int ans = 0, pos = 0, len = 1;
    
    for(pos = 0; pos < s.length(); pos++) {
        for(len = 1; len + pos - 1 < s.length(); len++) {
            string s1 = s.substr(pos, len);
            sort(s1.begin(), s1.end());
            it = umap.find(s1);
            
            if(it == umap.end()) { // firstly appears
                umap.insert(make_pair(s1, 1));
            } else { // already exists
                it->second++;
            }
        }
    }
    
    for(it = umap.begin(); it != umap.end(); it++) {
        int n = it->second;           
        ans += n * (n - 1) / 2;
    }
    
    cout << ans << endl;
    
}

int main() {
    
    int t;
    cin >> t;
    while(t--) 
        solve(); 
    
    return 0;
}
