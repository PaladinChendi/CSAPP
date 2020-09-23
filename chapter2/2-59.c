#include <stdio.h>

int main() {
    int x = 0x89ABCDEF;
    int y = 0x76543210;
    printf("%x \n", (x&0xFF) | (y&0xFFFFFF00));
    printf("%x \n", (x&0xFF) | (y&~0xFF));
    return 0;
}