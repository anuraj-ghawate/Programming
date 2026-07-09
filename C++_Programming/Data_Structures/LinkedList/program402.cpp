#include<iostream>
using namespace std;

#pragma pack(1)
struct node
{
    int data;
    struct node *next;
};

typedef struct node NODE;
typedef struct node* PNODE;

class SinglyLL
{
    private:
        PNODE first;
        int iCount;

    public:
         SinglyLL()
        {
            cout<<"Inside Constructor\n";
            this -> first = NULL;
            this -> iCount = 0;
        }


        void Display()
        {

        }


        int count()
        {
            return this -> iCount;
        }


        void InsertFirst(int iNO)
        {

        }


        void InsertLast(int iNo)
        {

        }


         void InsertAtPos(int iNo, int iPos)
        {

        }


        void DeleteFirst()
        {

        }

        void DeleteLast()
        {

        }


        void DeleteAtPos(int iPos)
        {

        }

};

int main()
{

    SinglyLL sobj;



    return 0;
}