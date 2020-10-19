#include <stdio.h>
#include <limits.h>

int tsub_ok(int x, int y) {
    int t = 1;
    if(y == INT_MIN) t = 0;
    int sub = x - y;
    int a = x > 0 && y < 0 && sub < 0;
    int b = x < 0 && y > 0 && sub > 0;
    return t && !(a || b);
}

int main() {
    printf("%d \n",tsub_ok(111, INT_MIN+1));
    printf("%d \n",tsub_ok(INT_MIN, 222));
}