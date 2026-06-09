#include<iostream>
using namespace std;

#pragma pack(1)
class ArrayX
{
     public:
          int *Arr;
          int iSize;

          ArrayX(int X) // Parameterised Constructor
          {
               cout<<"Inside Constructor"<<endl;

               iSize = X;              //Characteristics Initialization
               Arr = new int[iSize]; //Resource Allocation
          }

          // Destructor
          ~ArrayX()
          {
               cout<<"Inside Destructor"<<endl;
               delete []Arr; // Resource Deallocation
          }
};


int main()
{
     // static memory allocation for object
     // ArrayX aobj1(5);

     ArrayX *aobj = new ArrayX(5);

     delete aobj;

     cout<<"End Of main\n";
     
     return 0;
}