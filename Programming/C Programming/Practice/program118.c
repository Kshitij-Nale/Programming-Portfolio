#include<stdio.h>

int Sumation(int Arr[], int iSize)
{
    int iCnt = 0;
    int iSum = 0;

    for(iCnt = 0; iCnt<iSize; iCnt++)
    {
        iSum = iSum + Arr[iCnt];
    }
    return iSum;
    

}
int main()
{
    int iLength = 4;
    int Brr [iLength];
    int iRet = 0;
    int iCnt = 0;

    printf("Enter the Element : \n");

    for(iCnt = 0; iCnt< iLength; iCnt++)
    {
        scanf("%d", &Brr[iCnt]);
    }

    iRet = Sumation(Brr, iLength);

    printf("Addition %d \n", iRet);
    
    return 0;
}