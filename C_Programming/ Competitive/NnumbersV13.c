#include<stdio.h>
#include<stdlib.h>
#define NOT_PRESENT -1

int LastOcc(int Arr[],int iLength,int iNo)
{
    int iCnt = 0;

    for(iCnt = iLength-1; iCnt >= 0; iCnt--)
    {
        if(Arr[iCnt] == iNo)
        {
             break;
        }
    }

   if(iCnt >= 0)
   {
        return iCnt;
   }
   else
   {
        return NOT_PRESENT;
   }

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

    printf("Enter Number : \n");
    scanf("%d",&iNo);

    iRet = LastOcc(p,iSize,iNo);

    if(iRet == NOT_PRESENT)
    {
        printf("Element Not Available\n");
    }
    else
    {
         printf("Index Of Last occurence is : %d\n",iRet);
    }
   
    
    free(p);

    return 0;
}