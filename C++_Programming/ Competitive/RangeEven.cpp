#include<iostream>
using namespace std;

void RangeDisplayEven(int iStart, int iEnd)
{
    int iCnt = 0;
    
    if(iStart > iEnd)
    {
        cout<<"Invalid Range\n";
        return;
    }

    for(iCnt = iStart; iCnt <= iEnd; iCnt++)
    {
        if((iCnt % 2)==0)
        {
            cout<<iCnt<<"\t";
        }
    }
   
}

int main()
{
    int iValue1 = 0, iValue2 = 0;

    cout<<"Enter starting point : \n";
    cin>>iValue1;

    cout<<"Enter Ending point : \n";
    cin>>iValue2;

    RangeDisplayEven(iValue1,iValue2);

     return 0;
}