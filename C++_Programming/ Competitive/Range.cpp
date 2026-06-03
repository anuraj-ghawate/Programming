#include<iostream>
using namespace std;

void RangeDisplay(int iStart, int iEnd)
{
    int iCnt = 0;
    if(iStart <= iEnd)
    {
         for(iCnt = iStart; iCnt <= iEnd; iCnt++)
         {
             cout<<iCnt<<"\t";
         }
    }
    else
    {
        cout<<"Invalid range\n";
    }
   
}

int main()
{
    int iValue1 = 0, iValue2 = 0;

    cout<<"Enter starting point : \n";
    cin>>iValue1;

    cout<<"Enter Ending point : \n";
    cin>>iValue2;

    RangeDisplay(iValue1,iValue2);

     return 0;
}