import java.util.*;

class ArrayX
{
    private int iSize;
    private int Arr[];

    public ArrayX(int iValue)
    {
        System.out.println("Inside Constructor");
        this.iSize = iValue;
        this.Arr = new int[iSize];
    }

    public void finalize()
    {
        System.out.println("Inside finalize method");
        this.Arr = null;
    }

    public void Display()
    {
        int iCnt = 0;

        System.out.println("Array Elements Are :");
        for(iCnt = 0; iCnt < Arr.length; iCnt++)
        {
            System.out.println(Arr[iCnt]);
        }
    }

    public void Accept()
    {
        Scanner sobj = new Scanner(System.in);
        int iCnt = 0;

        System.out.println("Enter The Elements :");

        for(iCnt = 0; iCnt < Arr.length; iCnt++)
        {
            Arr[iCnt] = sobj.nextInt();
        }
    }
}

class program170
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);
        int iLength = 0;

        System.out.println("Enter The Number Of Elements : ");
        iLength = sobj.nextInt();

        //Allocate The Memory 
        ArrayX aobj = new ArrayX(iLength);

        //use the memory
        aobj.Accept();
        aobj.Display();

        //deallocate 
        aobj = null;
        System.gc();

    }
}