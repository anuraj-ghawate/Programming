import java.util.*;

class Number
{
   public void DisplayFactor(int iNo)
    {
        int iCnt = 0;

        System.out.println("Factors Of "+iNo+" Are :");

        for(iCnt = 1; iCnt <= iNo; iCnt++)
        {
            if(iNo % iCnt == 0)
            {
                System.out.println(iCnt);
            }
        }
       
    }

}
class DisplayFactors
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);
        int iValue = 0;

        System.out.println("Enter A Number");
        iValue = sobj.nextInt();

        Number nobj = new Number();

        nobj.DisplayFactor(iValue);

    }
}