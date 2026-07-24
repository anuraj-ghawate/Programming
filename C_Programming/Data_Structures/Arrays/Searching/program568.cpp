#include<iostream>
using namespace std;

class Searching
{
    private:
            int *Arr;
            int iSize;
    public:
            Searching(int iNo);
            ~Searching();

            void Accept();
            void Display();

            bool LinearSearch(int iNo);
            bool BiDirectionalSearch(int iNo);

};

Searching :: Searching(int iNo)
{
    iSize = iNo;
    Arr = new int [iSize];
}

Searching :: ~Searching()
{
    delete []Arr;
}

void Searching :: Accept()
{
    int i = 0;
    cout<<"Enter The Elements\n";

    for(i = 0; i < iSize; i++)
    {
        cin>>Arr[i];
    }
}

void Searching :: Display()
{
     int i = 0;
    cout<<"The Elements Of Array Are : \n";

    for(i = 0; i < iSize; i++)
    {
        cout<<Arr[i]<<endl;
    }
}

bool Searching :: LinearSearch(int iNo)
{
    bool bflag = false;

     int i = 0;

    for(i = 0; i < iSize; i++)
    {
        if(iNo == Arr[i])
        {
            bflag = true;
            break;
        }
    }

    return bflag;
}

 bool Searching :: BiDirectionalSearch(int iNo)
 {
    int iStart = 0;
    int iEnd = 0;

    bool bFlag = false;

    iStart = 0;
    iEnd = iSize-1;

    while (iStart < iEnd) // wrong condition middle element issue
    {
        if(Arr[iStart] == iNo || Arr[iEnd] == iNo)
        {
            bFlag = true;
            break;
        }

       iStart++;
       iEnd--;
    }

    return bFlag;
}

int main()
{
    Searching sobj(5);

    sobj.Accept();
    sobj.Display();

    if(sobj.LinearSearch(30) == true)
    {
        cout<<"Element Is Present\n";
    }
    else
    {
        cout<<"Element Is Not Present\n";
    }

     if(sobj.BiDirectionalSearch(30) == true)
    {
        cout<<"Element Is Present\n";
    }
    else
    {
        cout<<"Element Is Not Present\n";
    }

    return 0;
}