#include<stdio.h>
#include<stdlib.h>

int Product(int Arr[],int iLength)
{
    int iCnt = 0;
    int iProduct = 1;
    int iFlag = 0;

    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        if((Arr[iCnt] % 2) != 0)
        {
            iProduct = iProduct * Arr[iCnt];
            iFlag = 1;
             
        }
    }
    
    if(iFlag == 0)
    {
        return 0;
    }
    else
    {
        return iProduct;
    }

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


    iRet = Product(p,iSize);

    printf("Product is : %d\n",iRet);
   
    free(p);

    return 0;
}