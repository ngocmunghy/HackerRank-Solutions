#include <stdio.h>

int main() {
    int n;
    scanf("%d",&n);
    int p[n+1];
    for(int i = 1; i <= n; i++)
        scanf("%d",&p[i]);
    for(int x = 1; x <= n; x++){
        for(int y = 1; y <= n; y++){
            if(p[p[y]] == x)
            printf("%d\n",y);
        }
    }
    
    return 0;
}
