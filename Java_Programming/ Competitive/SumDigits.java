class Number
{
    public void SumDigit(int iNo)
    {
        int iSum = 0, iDigit = 0;

        while (iNo != 0)
        {
            iDigit = iNo % 10;
            iSum = iSum + iDigit;
            iNo = iNo / 10;
        }

        System.out.println("Sum Of Digits Of given Number Is : "+iSum);
    }
}

class SumDigits
{
    public static void main(String A[])
    {
        Number nobj = new Number();
        nobj.SumDigit(1234);
    }
}