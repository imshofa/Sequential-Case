#include <stdio.h>

int main() {
    const float TUNJANGAN_TRANSPORTASI = 500000;
    const float TUNJANGAN_MAKAN = 1000000;
    float gajiPokok, totalGaji;
    
    // Membaca gaji pokok
    printf("Masukkan gaji pokok: ");
    scanf("%f", &gajiPokok);
    
    // Menghitung total gaji
    totalGaji = gajiPokok + TUNJANGAN_TRANSPORTASI + TUNJANGAN_MAKAN;
    
    // Menampilkan total gaji
    printf("Total Gaji         : Rp. %.2f\n", totalGaji);
    
    return 0;
}
