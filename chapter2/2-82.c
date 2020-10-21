#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

int main() {
    int x = random();
    int y = random();
    unsigned ux = (unsigned) x;
    unsigned uy = (unsigned) y;
    printf("%d \n",(ux-uy)==-(unsigned)(y-x));
    printf("%d \n",((x>>2)<<2)<=x);
    printf("%d \n",((x+y)<<4)+y-x==17*y+15*x);
    x=INT_MIN;
    y=0;
    printf("%d \n", (x<y)==(-x>-y));
    x = -1;
    y = 1;
    printf("%d \n",~x+~y+1==~(x+y));
    
}