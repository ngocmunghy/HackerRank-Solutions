#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {
    int t,t_i,G_i,P_i;
    int i,j,k,l;
    int check;
    int count;
       
    scanf("%d",&t);
    for(t_i = 0; t_i < t; t_i++) {
        int R,C;
        scanf("%d %d",&R, &C);
        char **G = malloc(sizeof(char*)*R);
        for(G_i = 0; G_i < R; G_i++) {
            G[G_i] = (char*)malloc(10240*sizeof(char));
            scanf("%s",G[G_i]);
        }
        
        int r,c;
        scanf("%d %d",&r,&c);
        char **P = malloc(sizeof(char*)*R);
        for(P_i=0; P_i<r; P_i++) {
            P[P_i] = (char*)malloc(10240*sizeof(char));
            scanf("%s",P[P_i]);
        }
        
        check = 0;
        for(i=0;i<=R-r;i++) {
            for(j=0;j<=C-c;j++) {
                if(G[i][j] == P[0][0]) {
                    count = 0;
                    for(k=0;k<r;k++) {
                        for(l=0;l<c;l++) {
                            if(G[k+i][l+j] == P[k][l]) {
                                count++;
                                continue;
                            } else {
                                break;
                            }
                        }
                    }
                }
                if(count == r*c) {
                    check = 1;
                }
            }
        }
        if(check) {
            printf("YES\n");
        } else {
            printf("NO\n");
        }
    }
    return 0;
}
