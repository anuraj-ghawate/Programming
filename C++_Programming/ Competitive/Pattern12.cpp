#include<iostream>
using namespace std;

void Display(int iRow,int iCol)
{
    int i = 0, j = 0;
    char Ch1 = '\0', Ch2 = '\0';

    for(i = 1; i <= iRow; i++)
    {
        for(j = 1,Ch1 = 'A',Ch2 = 'a'; j <= iCol; j++, Ch1++, Ch2++)
        {
          if(i % 2 == 0)
          {
            cout<<Ch2<<" ";
          }
          else
          {
            cout<<Ch1<<" ";
          }
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