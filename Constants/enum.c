#include <stdio.h>

int main()
{
    // Define enum for different colored balls in billiards
    enum BILLIARDS { YELLOW = 2, RED = 1, GREEN = 3, BROWN = 4, BLUE = 5, PINK = 6, BLACK = 7 };

    int total_score = 0;

    // Player describes their shots
    printf("\nI pocketed a red ball worth %d points\n", RED);
    printf("Then a black ball worth %d points\n", BLACK);
    printf("Followed by another red ball worth %d points\n", RED);
    printf("And finally a blue ball worth %d points\n", BLUE);

    // Calculate total score
    total_score = RED + BLACK + RED + BLUE;

    // Output total score
    printf("\nIn total, I scored %d points\n", total_score);

    return 0;
}
