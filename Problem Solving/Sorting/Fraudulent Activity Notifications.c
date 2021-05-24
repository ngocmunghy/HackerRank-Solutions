#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
    int n;
    int d;
    scanf("%d %d", &n, &d);

    int* arr = (int*) malloc(n * sizeof(int));
    int* sort_arr = (int*) malloc(201 * sizeof(int));

    for (int i = 0; i < n; i++) {
        scanf("%d", &(arr[i]));
    }

    int d_even = d % 2 == 0;

    int d_half;
    if (d_even) {
        d_half = (d / 2);
    } else {
        d_half = ceil((float)d / 2.0f);
    }

    int announcements = 0;
    for (int i = 0; i < n; i++) {
        if (i >= d) {
            int j = 0;
            int h = 0;
            float median = 0;
            int median_valid = 0;
            while (!median_valid) {
                if (h + sort_arr[j] >= d_half && !d_even) {
                    median = j;
                    median_valid = 1;
                }

                if (h + sort_arr[j] >= d_half && median == 0 && d_even) {
                    median = j;
                }

                if (h + sort_arr[j] >= d_half + 1 && d_even) {
                    median += j;
                    median = median / 2;
                    median_valid = 1;
                }

                h += sort_arr[j];

                j++;
            }

            if (arr[i] >= median * 2.0f) {
                announcements++;
            }

            sort_arr[arr[i - d]]--;
        }

        sort_arr[arr[i]]++;
    }

    printf("%d\n", announcements);

    return 0;
}
