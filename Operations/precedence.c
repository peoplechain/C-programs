#include <stdio.h>

int main() {
    
    int result = 10 * 5 + 3;  // Default precedence: multiplication (*) before addition (+)
    int num = 10 * (5 + 3);  // Explicit precedence: addition (+) inside parentheses evaluated first
    
    printf("Result using default precedence: %d\n", result);
    
    printf("Result using explicit precedence: %d\n", num);

    return 0;
}
