#include<iostream>
using namespace std;

#pragma pack(1)
class ArrayX
{
     private:
          int *Arr;
          int iSize;

     public:
          ArrayX()
          {
               iSize = 5;              //Characteristics Initialization
               Arr = new int[iSize];   //Resource Allocation
          }

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
    
     ArrayX *aobj1 = new ArrayX(); //Default Constructor
     ArrayX *aobj2 = new ArrayX(5); // Parameterised Constructor

     // Function call

     delete aobj1;
     delete aobj2;
     
     return 0;
}