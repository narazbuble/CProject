#include <stdio.h>
#include <math.h>

typedef struct {
    double x, y; // Koordinat pusat
    double w, h; // Ukuran (lebar dan tinggi)
} Entity;

// periksa apakah titik (xu, yu) berada dalam entitas
int isInside(Entity entity, double xu, double yu) {
    return (xu >= entity.x - entity.w / 2 && xu <= entity.x + entity.w / 2 &&
            yu >= entity.y - entity.h / 2 && yu <= entity.y + entity.h / 2);
}

// Fungsi untuk menghitung jarak Euclidean
double euclideanDistance(double x1, double y1, double x2, double y2) {
    return sqrt(pow(x1 - x2, 2) + pow(y1 - y2, 2));
}

int main() {
    // Deklarasi variabel
    int wm, hm; // Ukuran peta
    Entity restaurant, forbiddenArea; // Entitas rumah makan dan daerah terlarang
    double xu, yu; // Koordinat L dan Rafif

    // Input ukuran peta
    scanf("%d %d", &wm, &hm);
    
    // Input rumah makan
    scanf("%lf %lf %lf %lf", &restaurant.x, &restaurant.y, &restaurant.w, &restaurant.h);
    
    // Input daerah terlarang
    scanf("%lf %lf %lf %lf", &forbiddenArea.x, &forbiddenArea.y, &forbiddenArea.w, &forbiddenArea.h);
    
    // Input posisi L dan Rafif
    scanf("%lf %lf", &xu, &yu);

    // Cek apakah berada di daerah terlarang
    if (isInside(forbiddenArea, xu, yu)) {
        printf("KAMU TERHALANG\n");
        return 0;
    }

    // Cek apakah sudah sampai di rumah makan
    if (isInside(restaurant, xu, yu)) {
        printf("KAMU SUDAH SAMPAI\n");
        return 0;
    }

    // Hitung jarak ke rumah makan
    double distance = euclideanDistance(xu, yu, restaurant.x, restaurant.y);
    printf("%.2f METER LAGI\n", distance);

    return 0;
}