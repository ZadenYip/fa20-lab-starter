#include <stdio.h>
#include "bit_ops.h"

// Return the nth bit of x.
// Assume 0 <= n <= 31
unsigned get_bit(unsigned x,
                 unsigned n) {
    unsigned bit = -1;
    unsigned mask = 1 << n;
    bit = (x & mask) >> n;
    return bit;
}
// Set the nth bit of the value of x to v.
// Assume 0 <= n <= 31, and v is 0 or 1
void set_bit(unsigned * x,
             unsigned n,
             unsigned v) {
    unsigned flag = (v << n); // 0...v...0
    unsigned filter = ~(1 << n); // 1...0...1
    *x = *x & filter; // set the nth bit to 0
    *x = *x | flag; // 0 or v = v
}
// Flip the nth bit of the value of x.
// Assume 0 <= n <= 31
void flip_bit(unsigned * x,
              unsigned n) {
    unsigned mask = 1 << n;
    *x = *x ^ mask;
}

