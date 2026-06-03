#include<iostream>
using namespace std;

bool CheckDigits(int iNo)
{
    int iDigit = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    while (iNo != 0)
    {
       iDigit = iNo  % 10;

       if(iDigit == 0)
        {
            return true;
        }

       iNo = iNo / 10;
    }
}

int main()
{
    int iValue = 0;
    bool bRet = false;

    cout<<"Enter the Number :\n";
    cin>>iValue;

    bRet = CheckDigits(iValue);

    if(bRet)
    {
        cout<<"0 is present in number\n";
    }
    else
    {
        cout<<"0 is not present\n";
    }
    
    return 0;
}