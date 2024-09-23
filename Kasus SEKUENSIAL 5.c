#include <stdio.h>

int main() {
    float vAwal, vAkhir, waktu, percepatan;
    
    printf("Menghitung percepatan\n");
    
    // Membaca kecepatan awal, kecepatan akhir, dan waktu
    printf("\tMasukkan kecepatan awal (m/s) : ");
    scanf("%f", &vAwal);
    printf("\tMasukkan kecepatan akhir (m/s): ");
    scanf("%f", &vAkhir);
    printf("\tMasukkan waktu tempuh (detik ): ");
    scanf("%f", &waktu);
    
    // Menghitung percepatan
    percepatan = (vAkhir - vAwal) / waktu;
    
    // Menampilkan percepatan
    printf("\tPercepatan                    : %.2f m/s^2\n", percepatan);
    
    return 0;
}
