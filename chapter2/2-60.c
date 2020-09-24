#include <stdio.h>
#include <assert.h>

unsigned replace_byte(unsigned x, int i, unsigned char b) {
    unsigned mask = 0xff << (i<<3);//为什么是i<<3? 因为i<<3=i*8,而一个字节8位，所以i等于几，就正好是左移几个字节
    unsigned replace = (unsigned)b << (i<<3);
    return x& ~mask | replace;
}

int main() {
    printf("%x \n", replace_byte(0x12345678,2,0xab));
    printf("%x \n", replace_byte(0x12345678,0,0xab));
    assert(0x12ab5678 == replace_byte(0x12345678,2,0xab));
    assert(0x123456ab == replace_byte(0x12345678,0,0xab));
    return 0;
}