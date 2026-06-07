#include<iostream>
using namespace std;

int Summation(int Arr[],int iSize)
{
     int iSum = 0, iCnt = 0;

     for(iCnt = 0; iCnt < iSize; iCnt++)
     {
          iSum = iSum + Arr[iCnt];
     }

     return iSum;
}

int main()
{
   int *Brr = NULL;
   int iLength = 0, iCnt = 0, iRet = 0;

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

   iRet = Summation(Brr,iLength);

   cout<<"Summation Is : "<<iRet<<endl;
   
   delete []Brr;

    return 0;
}