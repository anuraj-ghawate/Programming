#include<stdio.h>

#pragma pack(1)
struct node
{
    int data;
    struct node *next;
};

typedef struct node NODE;
typedef struct node * PNODE;

int Count(PNODE temp)
{
    int iCount = 0;

    while(temp != NULL)
    {
         iCount++;
         temp = temp->next;
    }

    return iCount;
}


void Display(PNODE temp)
{

    while(temp != NULL)
    {
         printf("%d\n",temp->data);
         temp = temp->next;
    }
}


int main()
{
    PNODE head = NULL;
    NODE obj1,obj2,obj3;

    int iRet = 0;

    head = &obj1;

    obj1.data = 11;
    obj1.next = &obj2;

    obj2.data = 21;
    obj2.next = &obj3;

    obj3.data = 51;
    obj3.next = NULL;

    Display(head);

    iRet = Count(head);  //Count(100)

    printf("Number Of Nodes Are : %d\n",iRet);
    
    return 0;
}