#include <stdio.h>
#include <stdbool.h> // Include for boolean types

int main() {
    int temperature = 28; // Temperature in Celsius
    bool is_raining = false;
    bool is_snowing = false;

    // Logical AND examples
    printf("Weather Conditions Check:\n");
    printf("AND (temperature >= 20 && !is_raining): %d\n", temperature >= 20 && !is_raining);
    printf("AND (temperature >= 20 && !is_snowing): %d\n", temperature >= 20 && !is_snowing);
    printf("AND (temperature >= 20 && is_raining): %d\n\n", temperature >= 20 && is_raining);

    // Logical OR examples
    printf("Decision to Go Outside:\n");
    printf("OR (temperature >= 25 || is_raining): %d\n", temperature >= 25 || is_raining);
    printf("OR (temperature >= 25 || is_snowing): %d\n", temperature >= 25 || is_snowing);
    printf("OR (temperature < 25 || is_raining): %d\n\n", temperature < 25 || is_raining);

    // Logical NOT examples
    printf("Inverted Weather Conditions:\n");
    printf("NOT is_raining: %d -> %d\n", is_raining, !is_raining);
    printf("NOT is_snowing: %d -> %d\n", is_snowing, !is_snowing);

    return 0;
}
