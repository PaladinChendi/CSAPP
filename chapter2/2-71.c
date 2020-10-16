#include <stdio.h>

typedef unsigned packed_t;

int xbyte_old(packed_t word, int bytenum) {
    // 抽取指定字节，再把它符号扩展为一个32位int
    return (word >> (bytenum << 3)) & 0xFF;
}

int xbyte_new(packed_t word, int bytenum) {
    // 抽取指定字节，再把它符号扩展为一个32位int
    int x = word << ((3 - bytenum) << 3);
    return x >> 24;
}

int main() {
    //原函数只是生成了一个unsigned，并没有进行符号扩展
    printf("%x \n",xbyte_old(0xaabbccdd,2));
    //把抽取出的字节移到最高位，在移到最低位，利用int实现符号扩展
    printf("%x \n",xbyte_new(0xaabbccdd,2));
}