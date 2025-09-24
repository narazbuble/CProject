#include <stdio.h>

int main() {
    int N; // Jumlah botol
    scanf("%d", &N);
    
    int volume[N]; // Array untuk menyimpan volume tiap botol
    int totalVolume = 0; // Total volume es teh

    // Input volume tiap botol
    for (int i = 0; i < N; i++) {
        scanf("%d", &volume[i]);
        totalVolume += volume[i]; // jumlah total volume
    }

    // Cek kondisi total volume
    if (totalVolume > 1000) {
        printf("Yahh tumpah, jadi mubazir deh\n");
    } else if (totalVolume < 1000) {
        printf("Masih belum penuh ini mahh, tuang lagi dong\n");
    } else {
        printf("nahh pas nihh, tinggal minum deh\n");
    }

    return 0;
}

