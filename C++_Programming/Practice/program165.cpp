#include<iostream>
using namespace std;

#pragma pack(1)
class ArrayX
{
     private:
          int *Arr;
          int iSize;

     public:
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

     // Function call

     delete aobj1;
     
     return 0;
}