#include <stdio.h>

int main()
{
    int calories_consumed = 1500; // Initial calories consumed
    int calories_burned = 300;   // Calories burned through activities

    printf("Initial Values:\n");
    printf("\tCalories consumed: %d\n", calories_consumed);
    printf("\tCalories burned: %d\n\n", calories_burned);

    // Using compound assignment operators for daily tracking
    calories_consumed += 600; // Adding more calories consumed
    printf("Added & Assigned:\n");
    printf("\tCalories consumed after addition: %d\n", calories_consumed);

    calories_consumed -= 300; // Subtracting calories consumed (meal)
    printf("Subtracted & Assigned:\n");
    printf("\tCalories consumed after subtraction: %d\n", calories_consumed);

    calories_burned *= 2; // Doubling the calories burned (intense workout)
    printf("Multiplied & Assigned:\n");
    printf("\tCalories burned after multiplication: %d\n", calories_burned);

    calories_burned /= 2; // Halving the calories burned (rest day)
    printf("Divided & Assigned:\n");
    printf("\tCalories burned after division: %d\n", calories_burned);

    calories_consumed %= 100; // Modulo operation (remaining calories after meal)
    printf("Modulated & Assigned:\n");
    printf("\tRemaining calories after modulo: %d\n", calories_consumed);

    return 0;
}
