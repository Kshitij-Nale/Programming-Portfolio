#include<stdio.h>
//Error Due to <Stdlib.h> Not Included
int main()
{
    int *Brr = NULL;
    int iLength = 0 , iCnt = 0;

    //Step : Accept the Number of Elements
    printf("Enter Number of Elements : \n");
    scanf("%d", &iLength);

    //Step 2 : Allocate the Memory
    Brr = (int *) malloc(iLength * sizeof(int));

    //Step 3: Accept the Values from the User 
    for(iCnt = 0; iCnt < iLength ; iCnt++)
    {
        scanf("%d" , &Brr[iCnt]);
    }


    //Step 4 : use the memory 
    

    //Step 5: Deallocate te memory 
    free(Brr);
    
    return 0;
}