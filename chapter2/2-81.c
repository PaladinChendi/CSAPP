#include <stdio.h>

int bit_parttern_A(int k) {
    return -1 << k;
}

int bit_parttern_B(int k, int j) {
    return ~(-1 << k) << j;
}

int main() {
    printf("%x \n",bit_parttern_A(5));
    printf("%x \n",bit_parttern_B(5,4));
}