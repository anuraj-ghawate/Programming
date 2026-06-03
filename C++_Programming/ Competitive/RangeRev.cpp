#include<iostream>
using namespace std;

void RangeRev(int iStart, int iEnd)
{
    int iCnt = 0;

    if(iStart > iEnd)
    {
        cout<<"Invalid Range\n";
        return;
    }

    for(iCnt = iEnd; iCnt >= iStart; iCnt--)
    {
        cout<<iCnt<<"\t";
    }

    
   
}

int main()
{
    int iValue1 = 0, iValue2 = 0;
    int iRet = 0;

    cout<<"Enter starting point : \n";
    cin>>iValue1;

    cout<<"Enter Ending point : \n";
    cin>>iValue2;

    RangeRev(iValue1,iValue2);

     return 0;
}