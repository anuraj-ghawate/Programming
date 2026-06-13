import java.util.*;

class Number
{
   public void Table(int iNo)
   {
        int icnt = 1;
        while (icnt<=10)
        {
            System.out.println(iNo*icnt);
            icnt++;
        }
   }
}

class Table
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);
    
        Number nobj = new Number();

        int iValue = 0;

        System.out.println("Enter A Number");
        iValue = sobj.nextInt();

        nobj.Table(iValue);
    }
}