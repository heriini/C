#include "../inc/operasi.h"
#include "../inc/calculator.h"
#include <stdio.h>


void clearBuffer(){
    while (getchar() != '\n');
}

void menu(){
    printf("Pilih Operator (+)(-)(x)(/) : ");
    scanf(" %c", &operartor);
    clearBuffer();
}

void hitung(){
    if(operartor == '+'){
        
        printf("\n(+) Penjumlahan.\n");
        printf("Masukan angka   : ");
        scanf("%f", &a);
        printf("Dijumlah dengan : ");
        scanf("%f", &b);
        clearBuffer();

        hasil = penjumlahan(a, b);
        printf("%.0f + %.0f = %.0f\n\n", a, b, hasil);
    } else if(operartor == '-'){

        printf("\n(-) Pengurangan.\n");
        printf("Masukan angka   : ");
        scanf("%f", &a);
        printf("Dikurang dengan : ");
        scanf("%f", &b);
        clearBuffer();

        hasil = pengurangan(a, b);
        printf("%.0f - %.0f = %.0f\n\n", a, b, hasil);
    } else if(operartor == 'x'){
        
        printf("\n(x) Perkalian.\n");
        printf("Masukan angka    : ");
        scanf("%f", &a);
        printf("Dikalikan dengan : ");
        scanf("%f", &b);
        clearBuffer();

        hasil = perkalian(a, b);
        printf("%.0f x %.0f = %.0f\n\n", a, b, hasil);
    } else if (operartor == '/'){
        
        printf("\n(/) Pembagian.\n");
        printf("Masukan angka    : ");
        scanf("%f", &a);
        printf("Dibagikan dengan : ");
        scanf("%f", &b);
        clearBuffer();

        hasil = pembagian(a, b);
        printf("%.0f / %.0f = %.1f\n\n", a, b, hasil);
    } else {
        printf("Operator tidak dikenali!\n\n");
    }
}