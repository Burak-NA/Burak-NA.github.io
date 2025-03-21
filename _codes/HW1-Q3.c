
/*Housing price calculator program*/

#include <stdio.h>  /*This library is needed to use printf and scanf functions in this program*/
#include <math.h>   /*This library is needed to use the power operand*/

int main ()
{

    int neighborhood_pop; /*Population of the neighborhood to be input by user */
    int size;             /*Size of the house to be input by user*/
    double HomeValue;     /*Output of the program, gives the minimum value of the house*/

    printf("How many people lives in the neighborhood?");
    scanf("%d", &neighborhood_pop); /*Takes the neighborhood population value from user*/

    printf("What is the size of the house?");
    scanf("%d", &size);             /*Takes the house size value from user*/

    HomeValue= ((pow(neighborhood_pop, 3))+(pow(size, 2)))*10000; /*Calculates the minimum value of the house*/

    printf("The minimum value of the house is %.2f TL", HomeValue); /*Outputs the minimum value of the house*/

    return 0;
}