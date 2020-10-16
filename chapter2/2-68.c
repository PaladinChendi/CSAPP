#include <stdio.h>

int lower_ont_mask(int n){
    //mask with least signficant n bits set to 1
    //examples: n = 6 --> 0x3f , n = 17 --> 0x1ffff
    unsigned x = 0xffffffff;
    int w = sizeof(int) << 3;   
    return x >> (w-n);
}

int main() {
    printf("%x \n",lower_ont_mask(6));
    printf("%x \n",lower_ont_mask(17));
    printf("%x \n",lower_ont_mask(32));
    return 0;
}