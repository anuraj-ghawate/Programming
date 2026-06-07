#include<iostream>
using namespace std;

int main()
{
   int *Brr = NULL;
   int iLength = 0, iCnt = 0;

   cout<<"Enter The Number Of Elements\n";
   cin>>iLength;

   Brr = new int[iLength];

   cout<<"Enter The Elements\n";

   for(iCnt = 0; iCnt<iLength; iCnt++)
   {
        cin>>Brr[iCnt];
   }

   cout<<"The Elements OF Array Are : \n";
   for(iCnt = 0; iCnt<iLength; iCnt++)
   {
        cout<<Brr[iCnt]<<endl;
   }

   delete []Brr;

    return 0;
}