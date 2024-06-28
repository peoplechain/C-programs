#include <stdio.h>


int main()
{
  float grade = 7.75 ;
  char letter = 'k' ;
  int mark = 90 ;
  int x = 7 , y = 5 ;
  double decimal = 0.12345678 ;

  printf( "Float cast to int: %d \n" , (int)grade ) ;
  printf( "Char cast to int: %d \n" , (int)letter ) ;
  printf( "Int cast to char: %c \n" , (char)mark ) ;
  printf( "Float arithmetic: %f \n" , (float)x / (float)y ) ; 
  printf( "Double cast to float: %f \n" , (float)decimal ) ; 

  return 0 ;
}
