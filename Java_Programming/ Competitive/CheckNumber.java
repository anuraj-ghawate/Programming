import java.util.*;

class Number
{
    public void CheckSign(int iNo)
    {
        if(iNo == 0)
        {
            System.out.println("Number Is Zero");
        }
        else if(iNo < 0)
        {
            System.out.println("Number Is Negative");
        }
        else
        {
            System.out.println("Number Is Positive");
        }
    }
}
class CheckNumber
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);
        int iValue = 0;

        System.out.println("Enter The Number");
        iValue = sobj.nextInt();

        Number nobj = new Number();

        nobj.CheckSign(iValue);
    }
}