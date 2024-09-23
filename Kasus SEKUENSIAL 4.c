#include <stdio.h>

int main() {
    float sisi, volume, luasPermukaan;
    printf("Menghitung volume dan luas permukaan kubus\n\n");
    // Membaca panjang sisi kubus
    printf("Masukkan panjang sisi kubus: ");
    scanf("%f", &sisi);
    
    // Menghitung volume dan luas permukaan
    volume = sisi * sisi * sisi;
    luasPermukaan = 6 * sisi * sisi;
    
    // Menampilkan volume dan luas permukaan
    printf("Volume                     : %.2f m^3\n", volume);
    printf("Luas Permukaan             : %.2f m^2\n", luasPermukaan);
    
    return 0;
}
