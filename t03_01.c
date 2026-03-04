#include <stdio.h>
#include <limits.h>

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

    return 0;
}
