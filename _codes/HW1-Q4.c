#include <stdio.h>
#include <math.h>


int computeHomeValue(int neighborhood_pop, int size) /* Function to compute home value based on neighborhood population and size */
{

	return((pow(neighborhood_pop, 3)+pow(size, 2))*10000); /* Calculates and returns the home value */
}

int main()
{

    int neighborhood_pop; /* Population of the neighborhood to be input by user */
    int size;             /* Size of the house to be input by user */
    int HomeValue;       /* Output of the program, gives the minimum value of the house */


    printf("How many people lives in the neighborhood?");
    scanf("%d", &neighborhood_pop); /* Takes the neighborhood population value from user */

    printf("What is the size of the house?");
    scanf("%d", &size);             /* Takes the house size value from user */

	HomeValue = computeHomeValue(neighborhood_pop, size); /* Calling the function to compute home value */
	
    printf("The minimum value of the house is %d TL", HomeValue); /*Outputs the minimum value of the house*/


	return 0;
}
