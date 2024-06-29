#include <stdio.h>

int main()
{
    // Student grades
    int student_grade = 75;
    int passing_grade = 60;

    char lwr = "a" , upr = "A";

    printf("Student Grade: %d\n", student_grade);
    printf("Passing Grade: %d\n\n", passing_grade);

    // Comparison and relational operators
    printf("Comparison Results:\n");
    printf("Equality (75 == 60): %d\n", student_grade == passing_grade);
    printf("Inequality (75 != 60): %d\n", student_grade != passing_grade);
    printf("Greater than (75 > 60): %d\n", student_grade > passing_grade);
    printf("Less than (75 < 60): %d\n", student_grade < passing_grade);
    printf("Greater or equal (75 >= 60): %d\n", student_grade >= passing_grade);
    printf("Less or equal (75 <= 60): %d\n", student_grade <= passing_grade);

    printf( "Equality (A==a): %d \n" , upr==lwr ) ;
    printf( "Inequality (A!=a): %d \n" , upr!=lwr ) ;

    return 0;
}
