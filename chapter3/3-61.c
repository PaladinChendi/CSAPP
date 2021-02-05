#include <stdio.h>

// long cread(long *xp) {
//     return (xp ? *xp : 0);
// }
// 使用gcc -Og -S 3-61.c 编译cread函数，发现无法编译成条件传送指令，因为如果要编译成条件传送指令，当xp=NULL时，*xp就有问题了

long cread_alt(long *xp) {
    long t = 0;
    long *p = (xp ? xp : &t);
    return *p;
}
// 使用gcc -Og -S 3-61.c 编译 cread_alt函数 就发现确实用了条件传送指令，而编译cread函数生成的是条件跳转指令