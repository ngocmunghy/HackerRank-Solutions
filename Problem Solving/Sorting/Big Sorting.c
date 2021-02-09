#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int cmpfunc(const void *pLeft, const void *pRight) {
    const char *left = *(const char**)pLeft;
    const char *right = *(const char**)pRight;
    int leftLen = strlen(left);
    int rightLen = strlen(right);
    if (leftLen != rightLen) {
        if(leftLen > rightLen) return 1;
        else return -1;
    } else {
        return strcmp(left, right);
    }
}

int main() {
    int n;
    scanf("%d", &n);
    char buffer[1000000];
    char **a = malloc(sizeof(char*) * n);
    for (int i = 0; i < n; i++) {
        scanf("%s", buffer);
        a[i] = malloc(sizeof(char) * (strlen(buffer) + 1));
        strcpy(a[i], buffer);
    }
    qsort(a, n, sizeof(a[0]), cmpfunc);
    for (int i = 0; i < n; i++) {
        printf("%s\n", a[i]);
    }

    return 0;
}
