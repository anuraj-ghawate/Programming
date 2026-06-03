#include<iostream>
using namespace std;

void DisplayDigits(int iNo)
{
    int iDigit = 0;
    if(iNo < 0)
    {
        iNo = -iNo;
    }

    while (iNo != 0)
    {
       iDigit = iNo  % 10;

       cout<<iDigit<<"\n";

       iNo = iNo / 10;
    }
}

int main()
{
    int iValue = 0;

    cout<<"Enter the Number :\n";
    cin>>iValue;

    DisplayDigits(iValue);

    return 0;
}