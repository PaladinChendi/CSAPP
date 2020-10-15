#include <stdio.h>

int any_odd_one(unsigned x){//当x的任何偶数位上是1就返回1，全不是就返回0
    return !!(x & 0x55555555);
}

int main(){
    printf("any odd bit of x equal 1? %d \n",any_odd_one(1));
    printf("any odd bit of x equal 1? %d \n",any_odd_one(2));
    printf("any odd bit of x equal 1? %d \n",any_odd_one(3));
    return 0;
}