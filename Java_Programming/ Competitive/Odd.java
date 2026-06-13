import java.util.*;

class Number
{
   public void DisplayOdd(int iNo)
   {
        int icnt = 1;
        while (icnt<=iNo)
        {
            if(icnt % 2 != 0)
            {
                System.out.println(icnt);
            }
            
            icnt++;
        }
   }
}

class Odd
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);
    
        Number nobj = new Number();

        int iValue = 0;

        System.out.println("Enter A Number");
        iValue = sobj.nextInt();

        nobj.DisplayOdd(iValue);
    }
}