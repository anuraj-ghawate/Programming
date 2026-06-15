#include<iostream>
using namespace std;

void Display(int iNo)
{
    int iCnt = 0;

    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
       cout<<"#\t"<<iCnt<<"\t"<<"*\t";
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