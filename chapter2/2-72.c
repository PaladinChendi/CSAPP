#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void copy_int(int val, void *buf, int maxbytes) {
    if (maxbytes -sizeof(val) >= 0)
        memcpy(buf, (void *) &val, sizeof(val));
}

void copy_int_new(int val, void *buf, int maxbytes) {
    if (maxbytes -(int)sizeof(val) >= 0)
        memcpy(buf, (void *) &val, sizeof(val));
}

int main() {
    int maxbytes = sizeof(int) * 10;
    void *buf = malloc(maxbytes);
    int val;
    val = 0x12345678;
    copy_int(val, buf, maxbytes);
    printf("%x \n", *(int *)buf);
    val = 0x11223344;
    copy_int(val, buf, -666);
    printf("%x \n", *(int *)buf);
    val = 0x55667788;
    copy_int_new(val, buf, -666);
    printf("%x \n", *(int *)buf);
}