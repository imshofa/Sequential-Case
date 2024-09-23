#include <stdio.h>

int main() {
    const float PAJAK = 0.1;
    float gajiPokok, bonus, penghasilanBersih;
    
    // Membaca gaji pokok dan bonus tahunan
    printf("Masukkan gaji pokok   :Rp. ");
    scanf("%f", &gajiPokok);
    printf("Masukkan bonus tahunan:Rp. ");
    scanf("%f", &bonus);
    
    // Menghitung penghasilan bersih setelah pajak
    penghasilanBersih = (gajiPokok + bonus) - (gajiPokok + bonus) * PAJAK;
    
    // Menampilkan penghasilan bersih
    printf("Penghasilan Bersih    :Rp. %.2f\n", penghasilanBersih);
    
    return 0;
}
