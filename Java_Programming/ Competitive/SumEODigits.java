import java.util.*;
class Number
{
    public void Sum(int iNo)
    {
        int iSumEven = 0;
        int iSumOdd = 0;
        int iDigit = 0;

        while(iNo != 0)
        {
            iDigit = iNo % 10;

            if(iDigit % 2 == 0)
            {
                iSumEven+=iDigit;
            }
            else
            {
                iSumOdd+=iDigit;
            }

            iNo = iNo / 10;
        }

        System.out.println("Sum Of Even Digits is : "+iSumEven);
        System.out.println("Sum Of Odd Digits is : "+iSumOdd);

    }

}

class SumEODigits
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);
        int iValue1 = 0;

        System.out.println("Enter A Number");
        iValue1 = sobj.nextInt();

        Number nobj = new Number();

        nobj.Sum(iValue1);

    }
}