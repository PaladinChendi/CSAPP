#include <stdio.h>

int fits_bits(int x, int n) {
    /*
    * return 1 when x can be represented as an n-bit, 2's complement
    * 判断x是否可以表示n位补码
    * 当x>0的时候，符号位n-1是0，前面w-n也是0
    * 例如 w = 8, n = 3 时 0b00000010 是对的, 0b00001010 不对, and 0b00000110 也不对
    * 当x>0的时候，符号位n-1是1，前面w-n也是1
    * 例如 w = 8, n = 3 时 0b11111100 是对的, 0b10111100 不对, and 0b11111000 也不对
    * 所以，左移w-n位，再右移w-n位，x的值不会改变
    */
   int w = sizeof(int) << 3;
   int offset = w - n;
   return (x << offset >> offset) == x;
}

int main() {
    printf("%d \n",fits_bits(0b00000010,3));
    printf("%d \n",fits_bits(0b00001010,3));
    printf("%d \n",fits_bits(0b00000110,3));
    printf("%d \n",fits_bits(0xfffffffc,3));
    printf("%d \n",fits_bits(0xffaffffc,3));
    printf("%d \n",fits_bits(0xfffffff8,3));
    return 0;
}