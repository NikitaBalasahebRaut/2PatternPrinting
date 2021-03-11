/*
 Problem statement :
 Write a program which accept number from user and display below patternwill display b:
 
 Input :    4
Output :   -4   -3  -2  -1  0   1   2   3   4
 
 Input :      2
 Output :   -2  -1  0   1   2
 
 */

/*
        iNo -> 4

        -4  -3  -2  -1  0
         1  2   3   4
*/



#include<stdio.h>

void Pattern(int iValue)
{
    int iCnt = 0;
	for(iCnt = -iValue; iCnt >= 0; iCnt--)
	{
	       printf("%d \t",iCnt);
	}
	
	for(iCnt = 1; iCnt <= iValue; iCnt++)
	{
	     printf("%d \t",iCnt);
	}
	
}

int main()
{
 int no = 0;
 
 printf("Enter The Number\n");
 scanf("%d",&no);
 
 Pattern(no);


return 0;
}