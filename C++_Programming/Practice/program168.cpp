#include<iostream>
using namespace std;

#pragma pack(1)
class ArrayX
{
     private:
          int *Arr;
          int iSize;

     public:
          
          // parameterised constructor with default arguments
          ArrayX(int X = 5)
          {
               iSize = X;              //Characteristics Initialization
               Arr = new int[iSize];   //Resource Allocation
          }

          ~ArrayX()
          {
               delete []Arr;  // Resource Deallocation
          }

          void Accept()
          {
               int iCnt = 0;
               cout<<"Enter The Elements :\n";

               for(iCnt = 0; iCnt < iSize; iCnt++)
               {
                    cin>>Arr[iCnt];
               }
          }

          void Display()
          {
               int iCnt = 0;
               cout<<"The Elements OF The Array Are :\n";

               for(iCnt = 0; iCnt < iSize; iCnt++)
               {
                    cout<<Arr[iCnt]<<endl;
               }
          }
};


int main()
{
    
     ArrayX *aobj = NULL;
     int iLength = 0;

     cout<<"Enter The Number of Elements : \n";
     cin>>iLength;

     aobj = new ArrayX(iLength);

     aobj->Accept();
     aobj->Display();

     delete aobj;
     
     return 0;
}