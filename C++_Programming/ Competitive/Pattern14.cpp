#include<iostream>
using namespace std;

void Display(int iRow,int iCol)
{
    int i = 0, j = 0;
    char Arr[] = {'#','*'};

    for(i = 1; i <= iRow; i++)
    {
        for(j = 1; j <= iCol; j++)
        {
            cout<<Arr[i % 2]<<" ";
        }
        cout<<"\n";
    }

}

int main()
{
    int iValue1 = 0, iValue2 = 0;

    cout<<"Enter A Number Of Rows :\n";
    cin>>iValue1;

    cout<<"Enter A Number Of Columns :\n";
    cin>>iValue2;

    Display(iValue1,iValue2);

    return 0;
}