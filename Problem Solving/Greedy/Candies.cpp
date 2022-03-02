#include <bits/stdc++.h>

using namespace std;

int main() {
    int n; cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++) cin >> arr[i];
    
    vector<int> a(n,1), b(n,1);
    
    for(int i = 1; i < n; i++) {
        if(arr[i] > arr[i-1])
            a[i] = a[i-1] + 1;
        else a[i] = 1;
    }
    
    for(int i = n-2; i >= 0; i--) {
        if(arr[i] > arr[i+1])
            b[i] = b[i+1] + 1;
        else b[i] = 1;
    }
    
    long res = 0;
    for(int i = 0; i < n; i++) {
        res += max(a[i], b[i]);
    }
    
    cout << res << "\n";
    return 0;
}
