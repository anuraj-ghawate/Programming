class node
{
    public int data;
    public node next;

    public node(int iNo)
    {
        this.data = iNo;
        this.next = null;
    }
}

class SinglyLL
{
    private node first;
    private int iCount;

    public SinglyLL()
    {
        System.out.println("Inside Constructor");
        this.first = null;
        this.iCount = 0;
    }


    public void Display()
    {}


    public int Count()
    {
        return iCount;
    }


    public void InsertFirst(int iNo)
    {}


     public void InsertLast(int iNo)
    {}

    public void InsertAtPos(int iNo , int iPos)
    {}


    public void DeleteFirst()
    {}


    public void DeleteLast()
    {}


    public void DeleteAtPos()
    {}
}
class program452
{
    public static void main(String A[])
    {
       SinglyLL sobj = new SinglyLL();

    }
}