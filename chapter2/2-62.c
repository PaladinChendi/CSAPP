#include <stdio.h>

int int_shifts_are_arithmetic(){
    int x = -1;
    return (x >> 1) == -1;
}

int main(){
    printf("are int shifts arithmetic? %d \n",int_shifts_are_arithmetic());
    return 0;
}