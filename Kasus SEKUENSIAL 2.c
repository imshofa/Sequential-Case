#include <stdio.h>

int main() {
    const float DISKON = 0.15;
    float hargaAsli, hargaAkhir;
    
    // Membaca harga asli barang
    printf("Masukkan harga asli barang:Rp. ");
    scanf("%f", &hargaAsli);
    
    // Menghitung harga akhir setelah diskon
    hargaAkhir = hargaAsli - (hargaAsli * DISKON);
    
    // Menampilkan harga akhir
    printf("Harga Akhir               :Rp. %.2f\n", hargaAkhir);
    
    return 0;
}
