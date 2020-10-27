#include <stdio.h>

typedef unsigned float_bits;

int float_f2i(float_bits f) {
    unsigned sign = f>>31;
    unsigned exp = f>>23 & 0xFF;
    unsigned frac = f & 0x7FFFFF;
    int E = exp-127;//偏置后的阶码
    int M =frac | 0x800000; //尾数
    if (E >= 31) {
        // overflow. return 0x80000000
        return 0x80000000;
    } else if (E > 23){ 
        int num = M << (E-23);
        return sign == 0 ? num : -num;
    } else if (E > 0){
        int num = M >> (23-E);
        return sign == 0 ? num : -num;
    } else {
        return 0;
    }
}

int main() {
    unsigned x;
    unsigned y;
    x = 0x4f800000; //overflow 2^32
    printf("%f \n",*(float *)&x);
    printf("%i \n",float_f2i(x));
    x = 0x4c000001; // 2^25+2^2
    printf("%f \n",*(float *)&x);
    y = float_f2i(x);
    printf("%i \n",y);
    x = 0xc1000000;//-8
    printf("%f \n",*(float *)&x);
    y = float_f2i(x);
    printf("%i \n",y);
    x = 0xbf000000;//-0.5f
    printf("%f \n",*(float *)&x);
    y = float_f2i(x);
    printf("%i \n",y);
}