#include <stdio.h>

void* basic_memset1(void *s, int c, size_t n) {
  size_t cnt = 0;
  unsigned char *schar = s;
  while (cnt < n) {
    *schar++ = (unsigned char) c;
    cnt++;
  }
  return s;
}

void *basic_memset2(void *s, int c, size_t n) {
    unsigned long l = 0;
    size_t k = sizeof(unsigned long);
    for (size_t i = 0; i <= k; i++)
    {
        l |= (unsigned char ) c;
        l = l << 8;
    }
    l |= (unsigned char ) c;
    
    unsigned char *schar = (unsigned char *)s;

    size_t i = 0;
    for (; i < n; i++)
    {
        if ((size_t) schar % k == 0)
            break;
        *schar++ = (unsigned char ) c;
    }
    n = n - i;

    size_t cnt = 0;
    size_t limit = n >= k ? n - k + 1 : 0;
    for (;cnt < limit; cnt += k)
    {
        *schar = l;
        schar += k;
    }

    for (; cnt < n; cnt++)
    {
        *schar++ = (unsigned char ) c;
    }

    return schar;
}

int main(int argc, char* argv[]) {
    void* test = malloc(sizeof(char) * 8);
    basic_memset1(test, 666, 777);
    printf("%lx\n", *(long *)test);
    basic_memset2(test, 666, 777);
    printf("%lx\n", *(long *)test);
    free(test);
    return 0;
}