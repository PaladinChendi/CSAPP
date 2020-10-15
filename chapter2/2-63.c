#include <stdio.h>

unsigned srl(unsigned x, int k) { //算术右移来实现逻辑右移
    /*perform shift arithmetically */
    unsigned xsra = (int) x >> k;
    int w = sizeof(int) << 3;
    int mask = (int)-1 << (w-k);
    return xsra & ~mask;
}

unsigned sra(int x, int k) { //逻辑右移来实现算术右移
    /*perform shift logically */
    int xsrl = (unsigned) x >> k;
    int w = sizeof(int) << 3;
    int mask = (int)-1 << (w-k);
    int mask2 = 1 << (w-1);
    int is_zero = (x&mask2) == 0;
    //如果x最高位是0，is_zero==1,mask= mask & 0
    //如果x最高位是1，is_zero==0,mask= mask & -1，mask每一位保持不变
    return xsrl | (mask & (is_zero -1));
}

int main() {
    unsigned x = 0x12345678;
    printf("%x\n",srl(x,8));
    int y = 0x12345678;
    printf("%x\n",sra(y,8));
    int z = 0xf2345678;
    printf("%x\n",sra(z,8));
}