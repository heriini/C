#include <stdio.h>
#include "../inc/operasi.h"
#include "../inc/calculator.h"

char operartor, jawab;
float a, b, hasil;

int main(){

    do{
       menu();
       hitung();
       printf("Ingin menghitung lagi ? (y)/(n) : ");
       scanf(" %c", &jawab);
       clearBuffer();
    } while (jawab == 'y');

    printf("\nMenutup Kalkulator..!\n\n");
    
    return 0;
}