#include <stdio.h>
#include "../inc/luas_bangun_datar.h"


int main(){
    
    int s;
    printf("masukan nilai sisi : ");
    scanf("%d", &s);
    printf("Luas persegi = %d\n", luasPersegi(s));
    return 0;
}


