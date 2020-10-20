#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void *calloc(size_t nmemb, size_t size) {
    printf("i am here \n");
    if (nmemb == 0 || size == 0) return NULL;
    size_t length = nmemb*size;
    if (nmemb == length/size) {
        void *addr = malloc(length);
        void *p = memset(addr, 0, nmemb*size);
        return p;
    }
    return NULL;
}

int main() {
    void *p = calloc(11,22);
    printf("%d \n",*(int *)p);
    free(p);
    // size_t在我的mac上是64位的，如果没有溢出可能会内存不够
    p = calloc(0xFFFFFFFFFFFFFFFF,0xFFFFFFFF);
    printf("%d \n",p == NULL);
}