#include <stdio.h>

float u2f(unsigned x) {
    return *(float *) &x;
}

float fpwr2(int x) {
    // result exponent and fraction
    unsigned exp, frac;
    unsigned u;
    if(x<-149) {
        // too small . return 0.0
        // 小于float的最小非规格化数
        exp = 0;
        frac = 0;
    } else if(x<-126) {
        //denormalized result
        // 小于float的最小规格化数
        exp = 0;
        // 非规格化数是由阶码E=-126，和尾数M组成的，而本题是求2^x，尾数M必然是2^n
        // 所以 2^x = 2^E*M = 2^-126* 2^n 所以 n=x+126
        int n = x + 126;
        // 因为n是负数，不能直接赋值给frac，否则会转成一个特别大的正数，写成frac=x结果就会出错
        // n的绝对值代表小数里第几位是1，所以左移n+23来获取
        frac = 1 << (n + 23);
    } else if (x<129) {
        // normalized result
        // 小于float的最大规格化数
        exp = x + 127;
        frac = 0;
    } else {
        // too big, return +infinity
        exp = 255;
        frac = 0;
    }
    //pack exp and frac into 32 bits
    u = exp << 23 | frac;
    // return as float
    return u2f(u);
}

int main() {
    // 不得不说，这道题设计的很赞
    printf("%f \n", fpwr2(-155));
    printf("%f \n", fpwr2(-130));
    printf("%f \n", fpwr2(-100));
    printf("%f \n", fpwr2(-3));
    printf("%f \n", fpwr2(10));
    printf("%f \n", fpwr2(133));
}