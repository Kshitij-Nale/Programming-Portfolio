/*
    Start
        Accept Number as No.
        If No is completely divisible by 2
            then print Even
        Otherwise 
            print Odd.


    
    
    Start
        Accept number as No
        Divide No by 2
        If remainder is 0
            then print as Even
        Otherwise
            print Odd
*/


#include<stdio.h>

int main ()
{
    int iValue = 0;
    int iRemainder = 0;

    printf("Enter Number : \n");
    scanf("%d", &iValue);

    iRemainder = iValue %2;

    if (iRemainder == 0)
    {
        printf("Number is Even ");
    } else
    {
        printf("Number is Odd");
    }
    


    return 0;
}