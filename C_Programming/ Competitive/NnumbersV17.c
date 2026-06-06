#include<stdio.h>
#include<stdlib.h>

int Minimum(int Arr[],int iLength)
{
    int iMin = 0;
    int iCnt = 0;

    iMin = Arr[iCnt];

    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        if(iMin > Arr[iCnt]) // Or (Arr[iCnt] < iMin)
        {
            iMin = Arr[iCnt];
        }
    }

    return iMin;
   
}

int main()
{
    int iSize = 0, iCnt = 0;
    int *p = NULL;
    int iRet = 0;
    printf("Enter the Number Of Elements :\n");
    scanf("%d",&iSize);

    p = (int*)malloc(iSize * sizeof(int));

    if(p == NULL)
    {
        printf("Unable To Allocate The Memory :\n");
        return -1;
    }
    else
    {
        printf("Memory Allocated Successfully \n");
    }

    printf("Enter The %d Elements :\n",iSize);
    for(iCnt = 0;iCnt < iSize; iCnt++)
    {
        printf("Enter %d Element : \n",iCnt+1);
        scanf("%d",&p[iCnt]);
    }


    iRet = Minimum(p,iSize);

    printf("Smallest is : %d\n",iRet);
   
    free(p);

    return 0;
}