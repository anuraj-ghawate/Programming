#include<iostream>
using namespace std;

void Display(int iRow,int iCol)
{
    int i = 0, j = 0;
    char Ch = '\0';

    for(i = 1; i <= iRow; i++)
    {
        if(i % 2 == 0)
        {
            for(j = 1, Ch = 'a'; j <= iCol; j++, Ch++)
            {
              cout<<Ch<<" ";
            }
        }
        else
        {
            for(j = 1, Ch = 'A'; j <= iCol; j++, Ch++)
              {
                cout<<Ch<<" ";
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