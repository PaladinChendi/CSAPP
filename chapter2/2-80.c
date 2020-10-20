#include <stdio.h>
#include <limits.h>

int threeforths(int x) {
  int is_neg = x & INT_MIN;
  int f = x & ~0x3;
  int l = x & 0x3;

  int fd4 = f >> 2;
  int fd4m3 = (fd4 << 1) + fd4;

  int lm3 = (l << 1) + l;
  int bias = (1 << 2) - 1;
  (is_neg && (lm3 += bias));
  int lm3d4 = lm3 >> 2;

  return fd4m3 + lm3d4;
}

int mul3div4(int x) {
    // x>0的时候，可以直接右移
    // x<0的时候，右移的时候会向下舍入，会有问题，需要处理一下改成向上舍入
    x = (x<<1)+x;
    int is_neg = x & INT_MIN;
    is_neg && (x = (x + (1 << 2) -1));
    return x >> 2;
}

int main() {
    printf("%d \n",threeforths(9));
    printf("%d \n",mul3div4(9));
    printf("%d \n",threeforths(-9));
    printf("%d \n",mul3div4(-9));
    printf("%d \n",threeforths(-10));
}