import java.util.*;
class Number
{
    public void MinDigit(int iNo)
    {
        int iMin = 0;
        int iDigit = 0;

        iMin = iNo % 10;
        
        while(iNo != 0)
        {
            iDigit = iNo % 10;

            if(iMin > iDigit)
            {
                iMin = iDigit;
            }

            iNo = iNo / 10;
        }

        System.out.println("Smallest Digit is : "+iMin);
    }
}

class MinDigit
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);
        int iValue1 = 0;

        System.out.println("Enter A Number");
        iValue1 = sobj.nextInt();

        Number nobj = new Number();

        nobj.MinDigit(iValue1);

    }
}