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

long long checkKaprekar(long long x) { //1234
    long numOfDigit = 0; 
    long y = x, i, part1=0;
    while(y != 0) {
        y = y/10;
        numOfDigit++;
    } // 4
    y=x*x; 
    for(i=0;i<numOfDigit;i++) {
        int tmp = y%10; //4
        y=y/10;  // 123
        part1 += tmp * pow(10,i);
    } // y = 12
    if(part1 + y == x) {
        return 1;
    } else 
        return 0;
}
// Complete the kaprekarNumbers function below.
void kaprekarNumbers(long long p, long long q) {
    long long i,flag = 0;
    for(i=p;i<=q;i++) {
        if(checkKaprekar(i)) {
            flag = 1;
            printf("%d ",i);
        }
    }
    if(!flag) {
        printf("INVALID RANGE");
    }
}

int main()
{
    char* p_endptr;
    char* p_str = readline();
    int p = strtol(p_str, &p_endptr, 10);

    if (p_endptr == p_str || *p_endptr != '\0') { exit(EXIT_FAILURE); }

    char* q_endptr;
    char* q_str = readline();
    int q = strtol(q_str, &q_endptr, 10);

    if (q_endptr == q_str || *q_endptr != '\0') { exit(EXIT_FAILURE); }

    kaprekarNumbers(p, q);

    return 0;
}

char* readline() {
    size_t alloc_length = 1024;
    size_t data_length = 0;
    char* data = malloc(alloc_length);

    while (true) {
        char* cursor = data + data_length;
        char* line = fgets(cursor, alloc_length - data_length, stdin);

        if (!line) {
            break;
        }

        data_length += strlen(cursor);

        if (data_length < alloc_length - 1 || data[data_length - 1] == '\n') {
            break;
        }

        alloc_length <<= 1;

        data = realloc(data, alloc_length);

        if (!line) {
            break;
        }
    }

    if (data[data_length - 1] == '\n') {
        data[data_length - 1] = '\0';

        data = realloc(data, data_length);
    } else {
        data = realloc(data, data_length + 1);

        data[data_length] = '\0';
    }

    return data;
}
