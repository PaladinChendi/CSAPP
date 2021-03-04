#include <stdio.h>
#include <assert.h>

typedef enum {NEG, ZERO, POS, OTHER} range_t;

range_t find_range(float x) {
  int result;
  float zero = 0.0;
  __asm__(
    "vucomiss %[z], %[x]\n\t"  
    "jb .NEG\n\t"
    "je .ZERO\n\t"
    "ja .POS\n\t"
    "jp .OTHER\n\t"
    ".NEG:\n\t"
    "movl $0, %[r]\n\t"
    "ret\n\t"
    ".ZERO:\n\t"
    "movl $1, %[r]\n\t"
    "ret\n\t"
    ".POS:\n\t"
    "movl $2, %[r]\n\t"
    "ret\n\t"
    ".OTHER:\n\t"
    "movl $3, %[r]\n\t"
    "ret\n\t"
    : [r] "=r" (result)											/*output*/
		: [x] "x" (x), [z] "x" (zero)           /*input*/
  );

}

int main(int argc, char* argv[]) {
  range_t n = NEG, z = ZERO, p = POS, o = OTHER;
  // assert(o == find_range(0.0/0.0));
  assert(n == find_range(-2.3));
  assert(z == find_range(0.0));
  assert(p == find_range(3.33));
  return 0;
}