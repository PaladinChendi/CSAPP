#include <stdio.h>

int main() {
    int x;
    x = 0xFFFFFFFF;
    printf("%d\n",!~x);
    x = 0;
    printf("%d\n",!x);
    x = 0x123456FF;
    printf("%d\n",!~(x| ~0xFF));
    x = 0x003000FF;
    printf("%d\n",!(x>>((sizeof(x)-1)<<3)));
    return 0;
}