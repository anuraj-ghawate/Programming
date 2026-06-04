#include<stdio.h>
#include<stdlib.h>

int Diff(int Arr[],int iLength)
{
    int iCnt = 0;
    int iSumEven = 0;
    int iSumodd = 0;
    int iDiff = 0;

    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        if((Arr[iCnt] % 2) == 0)
        {
            iSumEven = iSumEven + Arr[iCnt];
        }
        else
        {
            iSumodd = iSumodd + Arr[iCnt];
        }
    }

    iDiff = iSumEven - iSumodd;

    return iDiff;
}

int main()
{
    int iSize = 0, iCnt = 0, iRet = 0;
    int *p = NULL;

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

    iRet = Diff(p,iSize);

    printf("Result Is : %d\n",iRet);

    free(p);

    return 0;
}