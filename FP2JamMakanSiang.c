#include <stdio.h>

int main() {
    int HH, MM; // Jam dan menit
    int duration; // Durasi makan dalam menit

    // Input jam dan menit
    scanf("%d %d", &HH, &MM);
    
    // Input durasi makan
    scanf("%d", &duration);

    // Menghitung waktu selesai makan dalam menit
    int startTimeInMinutes = HH * 60 + MM; // Mengonversi waktu mulai ke menit
    int endTimeInMinutes = startTimeInMinutes + duration; // Waktu selesai dalam menit

    // Cek apakah waktu selesai makan masih dalam batas waktu
    if (endTimeInMinutes <= 780) { // 780 menit adalah 13:00
        printf("MASIH WAKTU\n");
    } else {
        printf("LEWAT WAKTU\n");
    }

    return 0;
}           







