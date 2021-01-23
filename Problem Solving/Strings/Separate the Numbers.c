#include <assert.h>
#include <limits.h>
#include <math.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* readline();

char* ltoa(long value, char* result, long base) {
    // check that the base if valid
    if (base < 2 || base > 36) { *result = '\0'; return result; }

    char* ptr = result, *ptr1 = result, tmp_char;
    long tmp_value;

    do {
        tmp_value = value;
        value /= base;
        *ptr++ = "zyxwvutsrqponmlkjihgfedcba9876543210123456789abcdefghijklmnopqrstuvwxyz" [35 + (tmp_value - value * base)];
    } while ( value );

    // Apply negative sign
    if (tmp_value < 0) *ptr++ = '-';
    *ptr-- = '\0';
    while(ptr1 < ptr) {
        tmp_char = *ptr;
        *ptr--= *ptr1;
        *ptr1++ = tmp_char;
    }
    return result;
}

void substr(char s[], char sub[], int pos, int len) {
    int c = 0;
    while(c < len) {
        sub[c] = s[c+pos];
        c++;
    }
    sub[c] = '\0';
}

// Complete the separateNumbers function below.
void separateNumbers(char* s) {
    long n = strlen(s);
    long i,flag = 0;
    char x[1000];
    char temp[1000];
    for(i=1;i<=n/2;i++) {
        substr(s,x,0,i-0);
        long v = atol(x);
        while(strlen(x) < n) {
            char buff[1000];
            v++;
            ltoa(v, buff, 10);
            strcat(x,buff);
        }
        if(strcmp(x,s) == 0) {
            substr(s,temp,0,i-0);
            flag = 1;
            break;
        }
    }
    if(flag) {
        printf("YES %s\n",temp);
    } else {
        printf("NO\n");
    }
}

int main()
{
    char* q_endptr;
    char* q_str = readline();
    int q = strtol(q_str, &q_endptr, 10);

    if (q_endptr == q_str || *q_endptr != '\0') { exit(EXIT_FAILURE); }

    for (int q_itr = 0; q_itr < q; q_itr++) {
        char* s = readline();

        separateNumbers(s);
    }

    return 0;
}

char* readline() {
    size_t alloc_length = 1024;
    size_t data_length = 0;
    char* data = malloc(alloc_length);

    while (true) {
        char* cursor = data + data_length;
        char* line = fgets(cursor, alloc_length - data_length, stdin);

        if (!line) { break; }

        data_length += strlen(cursor);

        if (data_length < alloc_length - 1 || data[data_length - 1] == '\n') { break; }

        size_t new_length = alloc_length << 1;
        data = realloc(data, new_length);

        if (!data) { break; }

        alloc_length = new_length;
    }

    if (data[data_length - 1] == '\n') {
        data[data_length - 1] = '\0';
    }

    data = realloc(data, data_length);

    return data;
}
