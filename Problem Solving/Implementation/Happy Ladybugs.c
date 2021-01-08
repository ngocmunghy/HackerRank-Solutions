#include <assert.h>
#include <limits.h>
#include <math.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    int i,j,n,count,flag,game;
    scanf("%d",&game);
    for(int store=0;store<game;store++){
        scanf("%d",&n);
        char s[n];
        scanf("%s",s);
        for(int t=0;t<n;t++){
            flag=0;
            if(s[t]=='_'){ 
                flag=1;
                break;
            }
        }

        for(i=0;i<n;i++){
            count=0;
            for(j=0;j<strlen(s);j++){
                if(s[j]==s[i] &&s[i]!='_')
                    count++;
            }
            if(count==1)
            break;
        }
        if(count==1){
            printf("NO\n");
            continue;
        }
        if(flag==0){
            for(i=1;i<n-1;i++){
                if(s[i]!=s[i+1] && s[i]!=s[i-1]){
                    printf("NO\n");
                    break;
                }else{
                    printf("YES\n");
                    break;}
                }
        }else {
            printf("YES\n");
        }
    }
    return 0;
}
