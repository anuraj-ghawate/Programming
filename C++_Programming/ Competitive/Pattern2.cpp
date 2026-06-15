#include<iostream>
using namespace std;

void Display(int iNo)
{
    int iCnt = 0;

    for(iCnt = iNo; iCnt >= 1; iCnt--)
    {
       cout<<iCnt<<"\t"<<"#\t";
    }

}

int main()
{
    int iValue = 0;

    cout<<"Enter A Number Of Elements :\n";
    cin>>iValue;

    Display(iValue);

    return 0;
}