#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main() {
    char* s = (char *)malloc(512000 * sizeof(char));
    scanf("%s",s);
    char* t = (char *)malloc(512000 * sizeof(char));
    scanf("%s",t);
    int k,min,i; 
    scanf("%d",&k);
    i=0;

    while(s[i]==t[i]){
        i++;
    }

    min=strlen(s)-i+strlen(t)-i;

    if((((strlen(s)-strlen(t))%2==1)||((strlen(t)-strlen(s))%2==1))&&(k%2==0)){
        printf("No");
    }

    else if(k>=min){
        printf("Yes");
    }

    else{
        printf("No");
    }
    return 0;
}
