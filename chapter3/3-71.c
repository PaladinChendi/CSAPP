#include <stdio.h>

#define BUF_SIZE 12

int good_echo() {
    char buf[BUF_SIZE];
    while(1) {
        /* function fgets is interesting */
        char* p = fgets(buf, BUF_SIZE, stdin);
        if (p == NULL) {
        break;
        }
        printf("%s", p);
    }
}

int main() {
    good_echo();
    return 0;
}