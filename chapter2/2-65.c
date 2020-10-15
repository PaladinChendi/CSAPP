
#include <stdio.h>

int even_ones(unsigned x){//两个1就相互抵消，最终能全部抵消就是0，否则就是1
    x ^= (x >> 16);
    x ^= (x >> 8);
    x ^= (x >> 4);
    x ^= (x >> 2);
    x ^= (x >> 1);
    return !(x&1);
} 

int main(){
    printf("contains an odd number of 1s? %d \n",even_ones(1));
    printf("contains an odd number of 1s? %d \n",even_ones(2));
    printf("contains an odd number of 1s? %d \n",even_ones(3));
    return 0;
}