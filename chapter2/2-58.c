#include <stdio.h>

int is_little_endian() {
    int i = 1;
    return *(char *)&i;
}

int main() {
    int ret = is_little_endian();
    printf("%d",ret);
    return 0;
}