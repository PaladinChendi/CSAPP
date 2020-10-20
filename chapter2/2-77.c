#include <stdio.h>

int main() {
    int x = 5;
    // x*K K=17
    printf("%d %d\n",x*17, (x<<4) + x);
    // x*K K=-7
    printf("%d %d\n",x*-7, x - (x<<3));
    // x*K K=60
    printf("%d %d\n",x*60, (x<<6) - (x<<2));
    // x*K K=-112
    printf("%d %d\n",x*-112, (x<<4) - (x<<7));
}