#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin >> n;
    while(n--) {
        string s;
        cin >> s;
        int c=0;
        vector <int> arr(26,0);
        for(int i = 0; i < s.length(); i++) {
            ++arr[s[i]-'a'];
        }
        for(int j=0; j < 26; j++) {
            if(arr[j] != 0)
                c++;
        }
        cout << c << endl;
    }
    
    return 0;
}
