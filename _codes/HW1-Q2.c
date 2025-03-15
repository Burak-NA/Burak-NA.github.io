/* Addition program */
#include <stdio.h>

/* function main begins program execution */
int main( void )
{
   int integer1; /* first number to be input by user  */
   int integer2; /* second number to be input by user */
   //Mistake 1> While defining integers, the line must end with a semicolomn.
   
   int sum;      /* variable in which sum will be stored */ 
   //Mistake 2> The variable 'sum' wasn't defined in the program.


   printf( "Enter first integer\n" ); /* prompt */ 
   //Mistake 3> There must be quotation marks inside the paranthesis in printf function.

   scanf( "%d", &integer1 );        /* read an integer */

   printf( "Enter second integer\n" ); /* prompt */
   scanf( "%d", &integer2 );           /* read an integer */
   
   sum = integer1 + integer2; /* assign total to sum */

   printf( "Sum is %d\n", sum ); /* print sum */
   return 0; /* indicate that program ended successfully */

} /* end function main */
