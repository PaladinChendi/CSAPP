#include <stdio.h>

// 汇编代码直接翻译成c语言
long switch_prob_impl(long x, long n) {
    static void *jt[6] = {
        &&loc_A, &&loc_def, &&loc_A,
        &&loc_B, &&loc_C, &&loc_D
    };
    unsigned long index = n - 60;
    long result;
    if(index > 5)
        goto loc_def;
    goto *jt[index];
    loc_A:
        result = 8 * x; 
        goto done;
    loc_B:
        result = x >> 3; 
        goto done;
    loc_C:
        result = x << 4 - x;
        x = result;
    loc_D:
        x = x * x;
    loc_def:
        result = x + 75; 
    done:
        return result;
}

// 逆向工程出来的C源码
long switch_prob(long x, long n) {
    long result = x;
    switch (n)
    {
    case 60:
    case 62:
        result = 8 * x;
        break;
    case 63:
        result = x >> 3; 
        break;
    case 64:
        result = x << 4 - x;
        x = result;
    case 65:
        x = x * x;
    default:
        result = x + 75; 
        break;
    }

    return result;
}