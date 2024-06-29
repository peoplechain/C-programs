#include <stdio.h>

int main()
{
    // Initial inventory counts
    int pencils = 20, pens = 15, erasers = 10;

    // Arithmetic operations
    printf("Initial Inventory:\n");
    printf("Pencils: %d\n", pencils);
    printf("Pens: %d\n", pens);
    printf("Erasers: %d\n\n", erasers);

    printf("Operations:\n");
    printf("Addition (Pencils + Pens): %d\n", pencils + pens);
    printf("Subtraction (Erasers - Pencils): %d\n", erasers - pencils);
    printf("Multiplication (Pencils * Pens): %d\n", pencils * pens);
    printf("Division (Pens / Erasers): %d\n", pens / erasers);
    printf("Modulus (Pencils %% Erasers): %d\n\n", pencils % erasers);

    // Increment operators
    int postfix_increment = 1;
    int prefix_increment = 1;

    printf("Increment Operations:\n");
    printf("Postfix increment: %d\n", postfix_increment++);
    printf("Postfix now: %d\n", postfix_increment);
    printf("Prefix increment: %d\n", ++prefix_increment);
    printf("Prefix now: %d\n", prefix_increment);

    return 0;
}
