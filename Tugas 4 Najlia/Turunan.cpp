#include <stdio.h>

int main() {
        float k, n;
        printf("Program untuk menghitung Turunan Fungsi f(x) => f\'(x)\n");
        printf("Masukkan konstanta: ");
        scanf("%f", &k);
        printf("Masukkan pangkat: ");
        scanf("%f", &n);

        printf("f(x) = %.2f x^%.2f\n", k, n);
        printf("f\'(x) = %.2f . %.2f x^(%.2f - 1)\n", k, n, n);
        printf("f\'(x) = %.2f x^%.2f\n", k * n, n - 1);
}