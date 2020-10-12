#include <assert.h>
#include <limits.h>
#include <math.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

char* readline();

// Complete the minimumNumber function below.
int minimumNumber(int n, char* password) {
    // Return the minimum number of characters to make the password strong
    int i=0,count[5]={0};
    while(i<n) {
        if(isdigit(password[i])) {
            count[1]++;
            i++;
        }
        if (islower(password[i])) {
          count[2]++;
          i++;
        }
        if (isupper(password[i])) {
          count[3]++;
          i++;
        }
        if (ispunct(password[i])) {
          count[4]++;
          i++;
        }
    }
    int c=0;
    for(i=1;i<5;i++) {
        if (count[i]==0) {
            c++;
        }
    }
    if ( n>=6 || (n<6 && c >= 6-n))
        return c;
    else return 6-n;
}

int main()
{
    FILE* fptr = fopen(getenv("OUTPUT_PATH"), "w");

    char* n_endptr;
    char* n_str = readline();
    int n = strtol(n_str, &n_endptr, 10);

    if (n_endptr == n_str || *n_endptr != '\0') { exit(EXIT_FAILURE); }

    char* password = readline();

    int answer = minimumNumber(n, password);

    fprintf(fptr, "%d\n", answer);

    fclose(fptr);

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
