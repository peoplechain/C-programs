#include <stdio.h>

int main() {
     int a = 12;    // Binary: 1100
     int b = 10;    // Binary: 1010

    // Bitwise AND (&) - Sets each bit to 1 if both bits are 1
     int result_and = a & b;    // 1100 & 1010 = 1000 (Decimal: 8)
    printf("a & b = %u\n", result_and);

    // Bitwise OR (|) - Sets each bit to 1 if at least one bit is 1
     int result_or = a | b;     // 1100 | 1010 = 1110 (Decimal: 14)
    printf("a | b = %u\n", result_or);

    // Bitwise XOR (^) - Sets each bit to 1 if only one of the bits is 1
     int result_xor = a ^ b;    // 1100 ^ 1010 = 0110 (Decimal: 6)
    printf("a ^ b = %u\n", result_xor);

    // Bitwise NOT (~) - Inverts all bits
     int result_not_a = ~a;     // ~1100 = 0011 (Decimal: 3)
     int result_not_b = ~b;     // ~1010 = 0101 (Decimal: 5)
    printf("~a = %u, ~b = %u\n", result_not_a, result_not_b);

    // Bitwise Left Shift (<<) - Shifts bits to the left by a specified number of positions
     int result_shift_left = a << 2;   // 1100 << 2 = 110000 (Decimal: 48)
    printf("a << 2 = %u\n", result_shift_left);

    // Bitwise Right Shift (>>) - Shifts bits to the right by a specified number of positions
     int result_shift_right = b >> 1;  // 1010 >> 1 = 0101 (Decimal: 5)
    printf("b >> 1 = %u\n", result_shift_right);

    return 0;
}
