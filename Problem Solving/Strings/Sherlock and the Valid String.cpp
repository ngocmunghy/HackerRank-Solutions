#include<bits/stdc++.h>

using namespace std;

int main() {
    
    char s[100001];
    cin >> s;
    
    int n = strlen(s);
    
    vector<int> cnt(26, 0);
    
    for(int i = 0; i < n; i++) {
        cnt[s[i] - 'a']++;
    }
    
    for(int i = 0; i < 26; i++) {
        if(cnt[i] == 0)
            continue;
        
        if(i < 26)
            cnt[i]--;
            
        vector<int> a = cnt;
        
        sort(a.begin(), a.end());
        int res = a[25];
        
        bool ok = true;
        
        for(int j = 0; j < 26; j++) {
            if(a[j] && a[j] != res) {
                ok = false;
                break;
            }
        } 
        
        if(ok) {
            cout << "YES" << endl;
            return 0;
        } 
        
        if(i < 26)
            cnt[i]++;
            
    }
    
    cout << "NO" << endl;
    
    return 0;
}
