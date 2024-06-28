#include <stdio.h>

int main() {
    // Declare variables for animal characteristics
    char animalType[] = "cat";     // String variable for type of animal
    int age = 3;                   // Integer variable for age
    float weight = 4.5;            // Floating-point variable for weight in kilograms

    // Declare location variable to store user input
    char location[50];  // Assuming the location can be a string of up to 49 characters (plus '\0')

    // Get user input for animal location
    printf("Enter the animal location: ");
    scanf("%s", location);  // Read a string input 

    // Output the location entered by the user
    printf("Location you entered is %s.\n", location);
    printf("Location stores at %p.\n", &location);
    
    // Output animal characteristics using format specifiers
    printf("I have a %s.\n", animalType);
    printf("It is %d years old.\n", age);
    printf("It weighs %.1f kilograms.\n", weight);
    
    return 0;
}
