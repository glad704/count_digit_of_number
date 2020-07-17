/*************************************************************************
 * FILE		: noOfDigits().c
 * DESCRIPTION	: Program to count the digits of a given number using recursion.
 * AUTHOR	: GLADSON HANSDA
 * DATED	: 17/07/2020
 * **********************************************************************/

int noOfDigits(int n1)
{
	static int ctr=0;
	if(n1!=0)
	{
		ctr++;
		noOfDigits(n1/10);
	}
	return ctr;
}



/*************************************************************************
 *			*End of noOfDigits().c*
 * **********************************************************************/
