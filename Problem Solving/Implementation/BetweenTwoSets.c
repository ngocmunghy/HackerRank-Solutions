#include<stdio.h>

void insertionSort(int a[], int n) {
    int i, j, tmp;
    for (i = 1; i <= n - 1; i++) {
    j = i;
    while (j > 0 && a[j - 1] > a[j]) {
      tmp = a[j - 1];
      a[j - 1] = a[j];
      a[j] = tmp;
      j--;
    }
  }
}

int main() {
    int a,b,k,count=0;
    scanf("%d %d",&a,&b);
    int i,j,m[a],n[b];
    for(i=0;i<a;i++) {
        scanf("%d",&m[i]);
    }
    if (a!=1)
    insertionSort(m, a);
    for(i=0;i<b;i++) {
        scanf("%d",&n[i]);
    } 
    if (b!=1)
    insertionSort(n,b);
    for(j = m[a-1]; j <= n[0]; j++) {
        i = 0;
        while (j % m[i] == 0) {
            i++;
            if (i==a) break;
        }
        if (i==a) {
            k=0;
            while (n[k] % j == 0) { 
                k++;
                if (k==b) break;
            }
            if (k == b)
                count += 1;
        }
        else continue;     
    }
    printf("%d",count);
    return 0;
}

