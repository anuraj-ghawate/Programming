import java.util.*;
class Number
{
    public void MaxDigit(int iNo)
    {
        int iMax = 0;
        int iDigit = 0;

        while(iNo != 0)
        {
            iDigit = iNo % 10;

            if(iDigit > iMax)
            {
                iMax = iDigit;
            }

            iNo = iNo / 10;
        }

        System.out.println("Largest Digit is : "+iMax);
    }
}

class MaxDigit
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);
        int iValue1 = 0;

        System.out.println("Enter A Number");
        iValue1 = sobj.nextInt();

        Number nobj = new Number();

        nobj.MaxDigit(iValue1);

    }
}