#include <stdio.h>

int bad_int_size_is_32() {
    //set most significant bit (msb) of 32-bit machine
    int set_msb = 1 <<31;
    // shift past msb of 32-bit word
    int beyond_msb = 1 << 32;
    //左移31位不等于0，说明不是16位机器
    //左移32位等于0，说明溢出了，是32位机器
    return set_msb && !beyond_msb;
}

int int_size_is_32() {
    //set most significant bit (msb) of 32-bit machine
    int set_msb = 1 <<31;
    // shift past msb of 32-bit word
    int beyond_msb = set_msb << 1;
    //左移31位不等于0，说明不是16位机器
    //左移32位等于0，说明溢出了，是32位机器
    return set_msb && !beyond_msb;
}

int int_size_is_16() {
    //set most significant bit (msb) of 32-bit machine
    int set_msb = 1 <<15 <<15 <<1;
    // shift past msb of 32-bit word
    int beyond_msb = set_msb << 1;
    //左移31位不等于0，说明不是16位机器
    //左移32位等于0，说明溢出了，是32位机器
    return set_msb && !beyond_msb;
}

int main() {
    printf("A:左移32位在c11没有定义 %d \n",bad_int_size_is_32());
    printf("B:至少为32位的机器上能正确运行 %d \n",int_size_is_32());
    printf("C:至少为16位的机器上能正确运 %d \n",int_size_is_16());
    return 0;
}