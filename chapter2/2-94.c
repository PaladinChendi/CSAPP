#include <stdio.h>

typedef unsigned float_bits;

float_bits float_twice(float_bits f) {
    unsigned sign = f>>31;
    unsigned exp = f>>23 & 0xFF;
    unsigned frac = f & 0x7FFFFF;
    if ((exp == 0xFF || exp == 0xFE) && frac != 0) {
        // NAN. return f
        return f;
    }
    exp += 1;
    // reassemble bits
    return (sign << 31) | (exp << 23) | frac;
}

int main() {
    unsigned x;
    unsigned y;
    x = 0xfff01234; //nan
    printf("%f \n",*(float *)&x);
    printf("%u \n",float_twice(x));
    x = 0xff001234; //非nan
    printf("%f \n",*(float *)&x);
    y = float_twice(x);
    printf("%f \n",*(float *)&y);
    x = 0x3f000000;//+0.5f
    printf("%f \n",*(float *)&x);
    y = float_twice(x);
    printf("%f \n",*(float *)&y);
    x = 0xbf000000;//-0.5f
    printf("%f \n",*(float *)&x);
    y = float_twice(x);
    printf("%f \n",*(float *)&y);
}