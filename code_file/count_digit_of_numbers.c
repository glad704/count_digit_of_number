/*************************************************************************
 * FILE		: count_digit_of_numbers().c
 * DESCRIPTION	: Program to count the digits of a given number using recursion.
 * AUTHOR	: GLADSON HANSDA
 * DATED	: 17/07/2020
 * **********************************************************************/

#include"/home/gladson/Desktop/Practice/program_practice/recursion/count_digit_of_number/include/count_digit_of_numbers.h"

int main()
{
	int n1,ctr;
	printf("\n\nCount the digits of a given number :\n");
	printf("----------------------------------------\n");
	printf("Input a number : ");
	scanf("%d",&n1);
	ctr = noOfDigits(n1);
	printf("The number of digits in the number is : %d \n\n",ctr);
	return 0;
}




/*************************************************************************
 *		    *End of count_digit_of_numbers().c*
 * **********************************************************************/
