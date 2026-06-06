#include<stdio.h>
#include<stdlib.h>

void Digits(int Arr[],int iLength)
{
   int iCnt = 0;
   int iDigit = 0;

   for(iCnt = 0; iCnt < iLength; iCnt++)
   {
        int iCountDigit = 0, iNo = Arr[iCnt];

        while (iNo != 0)
        {
            iDigit = iNo % 10;
            iCountDigit++;
            iNo = iNo / 10;
        }

        if(iCountDigit == 3)
        {
            printf("%d\t",Arr[iCnt]);
        }
     }
}

int main()
{
    int iSize = 0, iCnt = 0;
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

    Digits(p,iSize);
   
    free(p);

    return 0;
}