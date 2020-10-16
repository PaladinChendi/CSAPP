#include <stdio.h>

unsigned rotate_left(unsigned x, int n){
    //do rotating left shift. assume 0<= n < w
    //examples: when x = 0x12345678 and w = 32
    //  n=4 -> 0x23456781 , n=20 -> 0x67812345
    int w = sizeof(unsigned) << 3; 
    unsigned y = x << n;
    unsigned z = x >> (w-n);
    return y | z;
}

int main() {
    printf("%x \n",rotate_left(0x12345678,4));
    printf("%x \n",rotate_left(0x12345678,20));
    printf("%x \n",rotate_left(0x12345678,0));
    return 0;
}