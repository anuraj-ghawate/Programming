import java.util.*;

class Number
{
    public boolean CheckYear(int iYear)
    {
        if((iYear % 4 == 0) || ((iYear % 400 == 0) && (iYear % 100 != 0)))
        {
            return true;
        }
        else
        {
            return false;
        }
    }
}

class LeapYear
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);
        int iValue = 0;

        System.out.println("Enter The Year");
        iValue = sobj.nextInt();

        Number nobj = new Number();

        boolean bRet = false;

        bRet = nobj.CheckYear(iValue);

        if(bRet)
        {
            System.out.println("Year Is Leap");
        }
        else
        {
            System.out.println("Year Is Not Leap");
        }
    }
}