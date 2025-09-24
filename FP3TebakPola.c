#include <stdio.h>
#include <math.h>

int main() {
    int N; // Banyaknya suku yang diketahui
    scanf("%d", &N);
    
    long long arr[N]; // Array untuk menyimpan deret bilangan
    for (int i = 0; i < N; i++) {
        scanf("%lld", &arr[i]);
    }
    
    int K; // Posisi suku yang ingin dicari
    scanf("%d", &K);

    // Cek pola aritmetika
    long long Selisih = arr[1] - arr[0];
    int isArithmetic = 1;
    for (int i = 1; i < N; i++) {
        if (arr[i] - arr[i - 1] != Selisih) {
            isArithmetic = 0;
            break;
        }
    }

    // Cek pola geometri
    long long Rasio = arr[1] / arr[0];
    int isGeometric = 1;
    for (int i = 1; i < N; i++) {
        if (arr[i - 1] == 0 || arr[i] / arr[i - 1] != Rasio) {
            isGeometric = 0;
            break;
        }
    }

    // Menentukan pola dan menghitung suku ke-K
    if (isArithmetic) {
        long long nthTerm = arr[0] + (K - 1) * Selisih;
        printf("Aritmetika\n%lld\n", nthTerm);
    } else if (isGeometric) {
        long long nthTerm = arr[0] * pow(Rasio, K - 1);
        printf("Geometri\n%lld\n", nthTerm);
    } else {
        printf("Pola aneh! Pak Fufu ga jelas!\n");
    }

    return 0;
}