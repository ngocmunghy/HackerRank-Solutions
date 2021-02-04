#include<stdio.h>
#include<stdlib.h>

struct contest {
    int L;
    int T;
};

typedef struct contest Contest;

void swap(Contest *a, Contest *b) {
    Contest c;
    c = *a;
    *a = *b;
    *b = c;
}

int main() {
    int n,k,i,j,importanCount = 0,max = 0;
    scanf("%d %d",&n,&k);
    Contest arr[n];
    for(i=0;i<n;i++) {
        scanf("%d %d",&arr[i].L,&arr[i].T);
        if(arr[i].T) {
            importanCount++;
        }
    }
    
    if(k >= importanCount) { // count all
        for(i=0;i<n;i++) {
            max += arr[i].L;
        } 
    } else {
        int remainer = importanCount - k;
        
        // sort by T desc (1->0)
        for(i=0;i<n-1;i++) {
            for(j=i+1;j<n;j++) {
                if(arr[i].T < arr[j].T) {
                    swap(&arr[i], &arr[j]);
                }
            }
        }
        
        // sort by L asc 
        for(i=0;i<importanCount-1;i++) {
            for(j=i+1;j<importanCount;j++) {
                if(arr[i].L > arr[j].L) {
                    swap(&arr[i], &arr[j]);
                }
            }
        }
        
        // count max achievable
        for(i=0;i<remainer;i++) {
            max -= arr[i].L;
        }
        for(i=remainer;i<n;i++) {
            max += arr[i].L;
        }
    }
    
    printf("%d\n",max);
    
    return 0;
}
