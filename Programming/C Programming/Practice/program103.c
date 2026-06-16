#include<stdio.h>

void CallByaddress(int *iPtr)
{
    (*iPtr)++;
}
int main()
{
    int iValue = 11;
    
    CallByaddress(&iValue);

    printf("Value after Function : %d\n ", iValue );

    return 0;
}