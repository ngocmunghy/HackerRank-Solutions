#include <stdio.h>

int main() {
  int i,j,k,a[6][6],sum[4][4];
  for(i=0;i<6;i++) {
      for(j=0;j<6;j++) {
          scanf("%d",&a[i][j]);
      }
  }
  for(i=0;i<4;i++) {
      for(j=0;j<4;j++) {
          sum[i][j] = a[i][j]+a[i][j+1]+a[i][j+2]+a[i+1][j+1]+a[i+2][j]+a[i+2][j+1]+a[i+2][j+2];
      }
  }
  int max = sum[0][0];
  for (i = 0; i < 4; i++) {
    for (j = 0; j < 4; j++) {
        if (max < sum[i][j])
            max = sum[i][j];
    }
  }
    printf("%d",max);
    return 0;
}
