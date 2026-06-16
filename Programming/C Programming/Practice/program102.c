#include<stdio.h>

void CallbyValue(int iNo)
{
    iNo++;
}
int main()
{
    int iValue = 11;
    CallbyValue(iValue);

    printf("Value after Function : %d\n ", iValue );

    return 0;
}