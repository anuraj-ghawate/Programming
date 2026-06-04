#include<stdio.h>
#include<stdlib.h>

int Freq(int Arr[],int iLength,int iNo)
{
    int iCnt = 0;
    int iFreq = 0;

    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        if(Arr[iCnt] == iNo)
        {
            iFreq++;
        }
    }

    return iFreq;

}

int main()
{
    int iSize = 0, iCnt = 0,iNo = 0;
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

    printf("Enter Number To Count Frequency : \n");
    scanf("%d",&iNo);

    iRet = Freq(p,iSize,iNo);

    printf("Frequency Of %d Is : %d\n",iNo,iRet);

    free(p);

    return 0;
}