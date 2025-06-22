#include "../inc/hitung_luas.h"
#include "../inc/rumus.h"
#include <stdio.h>
#include <string.h>

void title(){
    char judul[26] = "KALKULATOR BANGUN DATAR";
    int width = strlen(judul) + 4;
    int height =  3;

    for(int i = 0; i < height; i++){
        for(int j = 0; j < width; j++){
            if( i == 0 || i == height - 1 || j == 0 || j == width -1){
                printf("*");
            } else if (i == 1  && j == (width - strlen(judul))/2) {
                printf("%s", judul);
                j += strlen(judul) - 1;
            } else{
                printf(" ");
            }
        }
    printf("\n");
    }
}

void hitung(){
    int nomor;

    printf("1. Persegi.\n2. Persegi Panjang.\n3. Segitiga.\n4. Jajar Genjang.\n5. Trapesium.\n6. Lingkaran.\n\n");
    printf("Pilih nomor untuk mulai menghitung luas bangun datar : ");
    scanf("%d", &nomor);

    // luas persegi
    if(nomor == 1){
        printf("\n* Hitung Luas Persegi *");
        int s, hasil;
        printf("\nMasukan sisi : ");
        scanf("%d", &s);
        hasil = luasPersegi(s);
        printf("Luas persegi : %d\n\n", hasil);
    } 
    // luas persegi panjang
    else if(nomor == 2){
        printf("\n* Hitung Luas Persegi panjang *");
        int p, l, hasil;
        printf("\nMasukan panjang : ");
        scanf("%d", &p);
        printf("Masukan lebar : ");
        scanf("%d", &l);
        hasil = luasPersegipanjang(p, l);
        printf("Luas persegi panjang : %d\n\n", hasil);
    } 
    // luas segitiga
    else if(nomor == 3){
        printf("\n* Hitung Luas Segitiga *");
        int a, t, hasil;
        printf("\nMasukan alas : ");
        scanf("%d", &a);
        printf("Masukan tinggi : ");
        scanf("%d", &t);
        hasil = luasSegitiga(a, t);
        printf("Luas segitiga : %d\n\n", hasil);
    } 
    // luas jajar genjang
    else if(nomor == 4){
        printf("\n* Hitung Luas Jajar genjang *");
        int a, t, hasil;
        printf("\nMasukan alas : ");
        scanf("%d", &a);
        printf("Masukan tinggi : ");
        scanf("%d", &t);
        hasil = luasJajargenjang(a, t);
        printf("Luas Jajar genjang : %d\n\n", hasil);
    }
    // luas trapesium
    else if(nomor == 5){
        printf("\n* Hitung Luas Trapesium *");
        int s, t, hasil;
        printf("\nMasukan jumlah sisi sejajar : ");
        scanf("%d", &s);
        printf("Masukan tinggi : ");
        scanf("%d", &t);
        hasil =  luasTrapesium(s, t);
        printf("Luas Trapesium : %d\n\n", hasil);
    }

    // luas lingkaran
    else if(nomor == 6){
        printf("\n* Hitung Luas Lingkaran *");
        float r, hasil;
        printf("\nMasukan jari-jari : ");
        scanf("%f", &r);
        hasil =  luasLingkaran(r);
        printf("Luas lingkaran : %.1f\n\n", hasil);
    }

}

