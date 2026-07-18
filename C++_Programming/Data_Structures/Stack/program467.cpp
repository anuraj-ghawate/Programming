#include<iostream>
using namespace std;

#pragma pack(1)
struct node
{
    int data;
    struct node *next;
};

#pragma pack(1)
class Stack
{
    private:
        struct node *first;
        int iCount;
    
    public:
        Stack();

        void Push(int iNo);  //InsertFirst
        int Pop();          // DeleteFirst
        int Peep();         // DeleteFirst
        void Display();
        int Count();
};

Stack :: Stack()
{
    this->first = NULL;
    this->iCount = 0;
}


void Stack :: Push(int iNo)
{
    struct node *newn = NULL;

    newn = new struct node();

    newn->data = iNo;
    newn->next = NULL;

    newn->next = this->first;
    this->first = newn;

    iCount++;
}


int Stack ::  Pop()   
{
    int iValue = 0;
    struct node *temp = NULL;
    if(this->first == NULL)
    {
        cout<<"Stack Is Empty\n";
        return -1;
    }
    else
    {
        iValue = first->data;
        temp = first;
        first = first ->next;
        delete temp;

        iCount--;

        return iValue;
    }
}


int Stack :: Peep()  
{
   int iValue = 0;

    if(this->first == NULL)
    {
        cout<<"Stack Is Empty\n";
        return -1;
    }
    else
    {
        iValue = first->data;
        return iValue;
    }
}    


void Stack :: Display()
{
    struct node *temp = NULL;

    temp = first;

    while (temp != NULL)
    {
        cout<<"| "<<temp->data<<" |\n";
        temp = temp->next;
    }
}


int Stack ::  Count()
{
    return iCount;
}


int main()
{
    Stack sobj;
    int iRet = 0;

    sobj.Push(11);
    sobj.Push(21);
    sobj.Push(51);
    sobj.Push(101);

    sobj.Display();
    
    iRet = sobj.Count();

    cout<<"Number Of Elements Of Stack Are : "<<iRet<<endl;



    iRet = sobj.Pop();
    cout<<"Popped Element Is : "<<iRet<<"\n";

    sobj.Display();
    iRet = sobj.Count();
    cout<<"Number Of Elements Of Stack Are : "<<iRet<<endl;


    iRet = sobj.Peep();
    cout<<"Peeped Element Is : "<<iRet<<"\n";

    sobj.Display();
    iRet = sobj.Count();
    cout<<"Number Of Elements Of Stack Are : "<<iRet<<endl;

    return 0;
}