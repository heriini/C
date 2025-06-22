#include "../inc/rumus.h"


int luasPersegi(int sisi){
    return sisi * sisi;
}

int luasPersegipanjang(int panjang, int lebar){
    return panjang * lebar ;
}

int luasSegitiga(int alas, int tinggi){
    return (alas * tinggi) / 2;
}

int luasJajargenjang(int alas, int tinggi){
    return alas * tinggi;
}

int luasTrapesium(int sisiSejajar, int tinggi){
    return (1/2 * sisiSejajar) * tinggi;
}

float luasLingkaran(float jariJari){
    const float phi = 3.14;
    return phi * (jariJari * jariJari);
}

