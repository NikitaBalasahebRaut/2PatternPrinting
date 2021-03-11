/*
 Problem statement :
 Write a program which accept number from user and display below patternwill display b:
 
 Input :    5
Output :   1   *   2    *   3      *    4   *   5   *
 
 Input : 2
 Output :   1     *  2  *
 
 */

/*
        iNo -> 4

        1        2         3       4

        1   *   2   *    3  *    4     *
*/

#include<stdio.h>

void Pattern(int iValue)
{
  int iCnt = 0;
  
  if(iValue < 0)
  { 
    iValue = -iValue;
  }
  
  for(iCnt = 1; iCnt <= iValue; iCnt++)
  {
    printf("%d",iCnt);
    printf("\t * \t");
   }
}

#include<stdio.h>

int main()
{
 int no = 0;
 
 printf("Enter The Number\n");
 scanf("%d",&no);
 
 Pattern(no);


return 0;
}

/*
output

D:\ProgramTopicWise\LB\PatternPrinting\Pattern2>gcc PrintStarAndNo.c -o myexe

D:\ProgramTopicWise\LB\PatternPrinting\Pattern2>myexe
Enter The Number
5
1        *      2        *      3        *      4        *      5        *

*/