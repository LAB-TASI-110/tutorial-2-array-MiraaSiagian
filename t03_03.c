#include <stdio.h>
#include <limits.h>
#include <float.h>

int main() {
    int n;

    while (scanf("%d", &n) != 1 || n <= 0) {
        while (getchar() != '\n');
    }

    int arr[n];

    int min_val = INT_MAX;
    int max_val = INT_MIN;

    for (int i = 0; i < n; i++) {
        int current_val;

        while (scanf("%d", &current_val) != 1 || current_val < -100 || current_val > 100) {
            while (getchar() != '\n');
        }
        arr[i] = current_val;

        if (current_val < min_val) {
            min_val = current_val;
        }
        if (current_val > max_val) {
            max_val = current_val;
        }
    }

    printf("%d\n", min_val);
    printf("%d\n", max_val);

    if (n >= 2) {
        double lowest_consecutive_avg = DBL_MAX;
        double highest_consecutive_avg = DBL_MIN;

        for (int i = 0; i < n - 1; i++) {
            double current_avg = (double)(arr[i] + arr[i+1]) / 2.0;
            if (current_avg < lowest_consecutive_avg) {
                lowest_consecutive_avg = current_avg;
            }
            if (current_avg > highest_consecutive_avg) {
                highest_consecutive_avg = current_avg;
            }
        }
        printf("%.2f\n", lowest_consecutive_avg);
        printf("%.2f\n", highest_consecutive_avg);
    } else {
        printf("N/A\n");
        printf("N/A\n");
    }

    return 0;
}
