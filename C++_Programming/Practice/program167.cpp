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
};


int main()
{
    
     ArrayX *aobj1 = new ArrayX();  // Parameterised Constructor

     ArrayX *aobj2 = new ArrayX(15); // Parameterised Constructor

     // Function call

     delete aobj1;
     delete aobj2;
     
     return 0;
}