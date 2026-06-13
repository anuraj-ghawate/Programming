import java.util.*;

class Number
{
    public void CalculatePower(int iBase,int iExp)
    {
        int iCnt = 0;
        int iPow = 0;
        for(iCnt = 1,iPow = 1; iCnt <= iExp; iCnt++)
        {
            iPow = iPow * iBase;
        }

        System.out.println("Power Is : "+iPow);
        
    }
}
class Power
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);
        int iValue1 = 0 ,iValue2 = 0;

        System.out.println("Enter The Base");
        iValue1 = sobj.nextInt();

        System.out.println("Enter The Exponent");
        iValue2 = sobj.nextInt();

        Number nobj = new Number();

        nobj.CalculatePower(iValue1,iValue2);
    }
}