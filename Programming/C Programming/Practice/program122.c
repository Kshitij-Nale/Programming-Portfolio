#include<stdio.h>
#include<stdlib.h>

int Sumation(int Arr[] , int iSize)
{
    int iCnt = 0, iSum = 0;
    

    for(iCnt =0; iCnt<iSize ; iCnt++)
    {
        iSum = iSum + Arr[iCnt];
    }
    return iSum;
}


int main()
{
    int *Brr = NULL;
    int iLength = 0 , iCnt = 0 , iRet =0;

    //Step : Accept the Number of Elements
    printf("Enter Number of Elements : \n");
    scanf("%d", &iLength);

    //Step 2 : Allocate the Memory
    Brr = (int *) malloc(iLength * sizeof(int));

    //Step 3: Accept the Values from the User 

    printf("Enter the Elemens : \n");

    
    for(iCnt = 0; iCnt < iLength ; iCnt++)
    {
        scanf("%d" , &Brr[iCnt]);
    }

    //Step 4 : use the memory 
    iRet = Sumation(Brr, iLength);

    printf("Addition is : %d\n" , iRet);

    //Step 5: Deallocate te memory 
    free(Brr);
    
    return 0;
}