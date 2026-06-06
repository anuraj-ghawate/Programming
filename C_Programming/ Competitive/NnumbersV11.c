#include<stdio.h>
#include<stdlib.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL Check(int Arr[],int iLength,int iNo)
{
    int iCnt = 0;
    BOOL bResult = FALSE;

    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        if(Arr[iCnt] == iNo)
        {
           bResult = TRUE;
           break;
        }
    }

    return bResult;
}

int main()
{
    int iSize = 0, iCnt = 0,iNo = 0;
    int *p = NULL;
    BOOL bRet = FALSE;
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

    printf("Enter Number To Check Present Or Not : \n");
    scanf("%d",&iNo);

    bRet = Check(p,iSize,iNo);

    if (bRet)
    {
       printf("Number Is present\n");
    }
    else
    {
        printf("Number Is not present");
    }
    
    free(p);

    return 0;
}