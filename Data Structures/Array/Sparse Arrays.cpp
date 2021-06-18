#include<bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    
    unordered_map<string, int> umap;
    unordered_map<string, int>::iterator it;
    for(int i = 0; i < n; i++) {
        string s;
        cin >> s;
        it = umap.find(s);
        if(it == umap.end()) {
            umap.insert(make_pair(s, 1));
        } else {
            it->second++;
        }
    }
    
    int q;
    cin >> q;
    
    for(int i = 0; i < q; i++) {
        string s; 
        cin >> s;
        it = umap.find(s);
        if(it == umap.end())
            cout << 0 << endl;
        else
            cout << it->second << endl;
    }
    return 0;
}
