#include<stdio.h>
#include<string.h>

int main() {
    int m,h;
    scanf("%d %d",&h,&m);
    char hour[12][100] = {"one","two","three","four","five","six","seven","eight","nine",   "ten","eleven","twelve"};
    char str[100] = "";
    char min[31][100] = {"o\' clock","one minute","two minutes","three minutes","four minutes","five minutes","six minutes","seven minutes","eight minutes","nine minutes","ten minutes",
    "eleven minutes","twelve minutes","thirteen minutes","fourteen minutes","quarter","sixteen minutes","seventeen minutes","eighteen minutes","nineteen minutes",
    "twenty minutes","twenty one minutes","twenty two minutes","twenty three minutes","twenty four minutes","twenty five minutes","twenty six minutes","twenty seven minutes","twenty eight minutes","twenty nine minutes", "half"
    };
    if(m==0) {
        strcat(str,hour[h-1]);
        strcat(str," ");
        strcat(str,min[m]);
    } else if(m>0 && m<=30) {
        strcat(str, min[m]);
        strcat(str," past ");
        strcat(str,hour[h-1]);
    } else {
        strcat(str,min[60-m]);
        strcat(str," to ");
        strcat(str,hour[h]);
    }
    printf("%s\n",str);
    return 0;
}
