#include<iostream>
using namespace std;

#pragma pack(1)
class ArrayX
{
     public:
          int *Arr;
          int iSize;

          ArrayX(int X)
          {
               iSize = X;              //Characteristics Initialization
               Arr = new int[iSize];   //Resource Allocation
          }

          ~ArrayX()
          {
               delete []Arr;  // Resource Deallocation
          }
};


int main()
{
    
     ArrayX *aobj1 = new ArrayX(5);

     cout<<aobj1->iSize<<endl;

     aobj1->iSize = 0; // Issue
     aobj1->Arr = NULL; //Issue

     delete aobj1;
     
     return 0;
}