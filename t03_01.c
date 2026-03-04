#include <stdio.h>
#include <limits.h>

int main() {
    int n;

    printf("Masukkan jumlah baris masukan berikutnya (n): ");
    while (scanf("%d", &n) != 1 || n <= 0) {
        while (getchar() != '\n');
        printf("Input tidak valid. n harus bilangan bulat positif. Silakan masukkan lagi: ");
    }

    int arr[n];

    int min_val = INT_MAX;
    int max_val = INT_MIN;

    for (int i = 0; i < n; i++) {
        int current_val;

        printf("Masukkan bilangan bulat ke-%d (antara -100 sampai 100): ", i + 1);
        while (scanf("%d", &current_val) != 1 || current_val < -100 || current_val > 100) {
            while (getchar() != '\n');
            printf("Input tidak valid. Masukkan bilangan bulat antara -100 dan 100: ");
        }
        arr[i] = current_val;

        if (current_val < min_val) {
            min_val = current_val;
        }
        if (current_val > max_val) {
            max_val = current_val;
        }
    }

    printf("\n--- Hasil Analisis ---\n");
    printf("Nilai terkecil: %d\n", min_val);
    printf("Nilai terbesar: %d\n", max_val);

    return 0;
}
