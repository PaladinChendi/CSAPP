#include <stdio.h>
#include <limits.h>

int divide_power2(int x, int y) {
    // x>0的时候，可以直接右移
    // x<0的时候，右移的时候会向下舍入，会有问题，需要处理一下改成向上舍入
    int is_neg = x & INT_MIN;
    is_neg && (x = (x + (1 << y) -1));
    return x >> y;
}

int main() {
    printf("%d \n",divide_power2(12340,0));
    printf("%d \n",divide_power2(12340,1));
    printf("%d \n",divide_power2(12340,4));
    printf("%d \n",divide_power2(12340,8));
    printf("%d \n",divide_power2(-12340,0));
    printf("%d \n",divide_power2(-12340,1));
    printf("%d \n",divide_power2(-12340,4));
    printf("%d \n",divide_power2(-12340,8));
}