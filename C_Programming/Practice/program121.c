#include<stdio.h>
#include<stdlib.h>

void Display(int Arr[], int iSize)
{
    int iCnt = 0;
    printf("Elements of the Array Are : \n");

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        printf("%d\n",Arr[iCnt]);
    }
}

int main()
{
    int *Brr = NULL;
    int iLength = 0, iCnt = 0;

    // Step 1 : Accept The Number Of Elements
    printf("Enter number of Elements : \n");
    scanf("%d",&iLength);

    // Step 2 : Allocate the Memory
    Brr = (int *)malloc(iLength * sizeof(int));

    //Step 3: Accept The Values From User

    printf("Enter The Elements : \n");
    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        scanf("%d",&Brr[iCnt]);
    }

    //Step 4: Use The Memory(logic)
    Display(Brr,iLength);

    //Step 5 : Deallocate The Memory

    free(Brr);


    return 0;
}