#include <stdio.h>
#include<stdlib.h>
#include<stdbool.h>

bool LinearSearch(int Arr[] , int iSize , int iNo)
{
    int iCnt = 0 ;
    bool bFlag = false;

    for(iCnt = 0 ; iCnt< iSize ; iCnt++)
    {
        if(Arr[iCnt] == iNo)
        {
            bFlag = true;
            break;
        }
    }
    return bFlag;
}
int main()
{
    int *Brr = NULL;
    int iLength = 0, iCnt = 0, ivalue = 0;
    bool bRet = false;

    printf("Enter the Number of Elements \n");
    scanf("%d" , &iLength);

    Brr = (int *) malloc (sizeof(int) *iLength);

    printf("Enter the Elements : \n");

    for(iCnt = 0; iCnt < iLength ; iCnt++)
    {
        scanf("%d" , &Brr[iCnt]);
    }

    printf("Enter the Element that you want to search : \n");
    scanf("%d" , &ivalue);

    bRet = LinearSearch(Brr , iLength , ivalue);
    
    if(bRet == true)
    {
        printf("Element is Present \n");
    }
    else
    {
        printf("Element is Not present : ");
    }

    free(Brr);

    return 0;
}