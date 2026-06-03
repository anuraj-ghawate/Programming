#include<iostream>
using namespace std;

int RangeSum(int iStart, int iEnd)
{
    int iCnt = 0;
    int iSum = 0;

    if((iStart < 0) || (iStart > iEnd))
    {
        cout<<"Invalid Range\n";
        return -1;
    }

    for(iCnt = iStart; iCnt <= iEnd; iCnt++)
    {
        iSum+=iCnt;
    }

    return iSum;
   
}

int main()
{
    int iValue1 = 0, iValue2 = 0;
    int iRet = 0;

    cout<<"Enter starting point : \n";
    cin>>iValue1;

    cout<<"Enter Ending point : \n";
    cin>>iValue2;

    iRet = RangeSum(iValue1,iValue2);

    if(iRet != -1)
    {
        cout<<"Addition Of all number is : "<<iRet<<"\n";

    }
    

     return 0;
}