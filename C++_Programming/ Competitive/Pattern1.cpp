#include<iostream>
using namespace std;

void Display(int iNo)
{
    char Ch = '\0';
    int iCnt = 0;

    for(Ch = 'A', iCnt = 1; iCnt <= iNo; iCnt++,Ch++)
    {
        cout<<Ch<<"\t";
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