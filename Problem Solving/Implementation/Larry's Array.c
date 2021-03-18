#include<stdio.h>
#include<stdlib.h>

void solve() {
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++) scanf("%d",&arr[i]);
    int k=0;
    for(int i=0;i<n-1;i++) {
        for(int j=i+1;j<n;j++) {
            if(arr[i] > arr[j]) k++;
        }
    }
    if(k % 2) {
        printf("NO\n");
        return;
    }
    printf("YES\n"); 
}

int main() {
    
    int t;
    scanf("%d",&t);
    while(t--) 
        solve();    

    return 0;
}
