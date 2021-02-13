#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int cmpfunc(const void *a, const void *b) {
  return (*(char*)a) - (*(char*)b);
}

void swap(char *a, char *b) {
    char c = *a;
    *a = *b;
    *b = c;
}

void solve() {
    char s[100];
    scanf("%s",s);
    int n = strlen(s);
    int baseIndex = n-1;

    // from right to left, find the first char that is > the previous one, locate its index to baseIndex
    int i;
    for(i=n-1;i>0;i--) {
        if(s[i] > s[i-1]) {
            baseIndex = i-1;
            break;
        }
    }
    if(i == 0) {
        printf("no answer\n");
        return;
    } else {
        // from baseIndex to right, find the smallest but bigger than s[baseIndex]
        int min = 99, theChosenOne;
        for(i=baseIndex+1;i<n;i++) {
            if((s[i]-s[baseIndex]) > 0 && min > (s[i]-s[baseIndex])) {
                min = s[i] - s[baseIndex];
                theChosenOne = i;
            }
        }
        
        swap(&s[baseIndex],&s[theChosenOne]);
        baseIndex++;
        // order the characters from baseIndex in asc
        qsort(s+baseIndex, n-baseIndex, sizeof(char), cmpfunc);
        
        // print the result
        printf("%s\n",s);
        
    }
    
}

int main() {
    int t;
    scanf("%d",&t);
    while(t--)
        solve();
    return 0;
}

// int main() {
//   char str[] = "cbajay";
//   int n = strlen(str);
//   qsort(str+1, n-1, sizeof(char), cmpfunc);
//   printf("%s\n",str);
// }
