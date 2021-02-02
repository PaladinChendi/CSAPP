#include <stdio.h>

long decode2(long x, long y, long z) {
    y = y - z;
    x = x * y;
    return ((y << 63) >> 63) ^ x;
}

int main() {
    int ret = decode2(1, 2, 3);
    printf("%d",ret);
    return 0;
}