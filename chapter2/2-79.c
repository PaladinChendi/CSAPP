#include <stdio.h>
#include <limits.h>

int mul3div4(int x) {
    // x>0的时候，可以直接右移
    // x<0的时候，右移的时候会向下舍入，会有问题，需要处理一下改成向上舍入
    x = (x<<1)+x;
    int is_neg = x & INT_MIN;
    is_neg && (x = (x + (1 << 2) -1));
    return x >> 2;
}

int main() {
    int x = 10;
    printf("%d \n",10*3/4);
    printf("%d \n",mul3div4(x));
    printf("%d \n",-10*3/4);
    printf("%d \n",(-10*3)>>2);
    printf("%d \n",mul3div4(-x));
}