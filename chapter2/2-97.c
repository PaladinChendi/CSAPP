#include <stdio.h>

typedef unsigned float_bits;

float_bits float_i2f(int i) {
    if(i == 0) return 0;
    unsigned sign = i < 0 ? 1 : 0;
    unsigned x = i > 0 ? i : -i;//把i转换成无符号数，不然会有算术右移
    int w = sizeof(int) << 3;
    int j;
    for(j = w-1; j >=0; j--) {
        if ((x >> j) == 1) break; //找到最高位
    }
    unsigned exp = 127 + j;
    unsigned frac;
    if (j <= 23){
        frac = (x << (23-j)) ;
    } else {//x超过2^24就要考虑精度以及舍入
        frac = (x >> (j-23));
        unsigned mask = (1<<(j-23)) - 1;
        //要舍掉的位是形如11、111就进位
        if( (x&mask) > (1<<(j-24)) ) frac++; 
        //要舍掉的位是形如100，如果尾数最后一位是0，舍入到0（偶数），最后一位是1就进位
        else if( (x&mask) == 1<<(j-24)  &&  (frac&1)) frac++; 
        if(frac == (1<<24)) exp++; //舍入到偶数超过(1<<24) - 1，指数需要再加1
    }
    
    return sign << 31 | exp << 23 | (frac & 0x7fffff);
}

int main() {
    int x = 0;
    do{
        float_bits y = float_i2f(x);
        float fx = (float)x;
        float fy = *(float *)&y;
        if(fx != fy){
            printf("error in %d %x:  %f %f\n", x, x, fx, fy);
            break;
        }
        x++;
    }while(x!=2^26);
    return 0;
}