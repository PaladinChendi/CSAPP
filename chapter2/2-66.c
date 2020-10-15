#include <stdio.h>

int leftmost_one(unsigned x){
    //将最高位为1的位，右边全改成1，然后通过异或只留下最高位
    x |= (x >> 1);
    x |= (x >> 2);
    x |= (x >> 4);
    x |= (x >> 8);
    x |= (x >> 16);
    return x^(x>>1);
}

int main() {
    printf("%x \n",leftmost_one(0xFF00));
    printf("%x \n",leftmost_one(0x6600));
    printf("%x \n",leftmost_one(0x0100));
    return 0;
}