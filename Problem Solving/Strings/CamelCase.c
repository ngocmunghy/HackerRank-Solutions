#include <stdio.h>
#include <string.h>
#define MAX 100000
int main() {
    char str[MAX];
    gets(str);
    int n = strlen(str);
    int i, count = 0;
    for (i = 0; i < n; i++) {
        if (str[i] >= 'A' && str[i] <= 'Z')
            count += 1;
    }
    printf("%d", count + 1);
    return 0;
}

