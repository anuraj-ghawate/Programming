import java.util.*;

class Number
{
    public void CheckPalindrome(int iNo)
    {
        int iDigit = 0, iTemp = 0, iRev = 0;
        iTemp = iNo;

        while (iNo != 0)
        {
            iDigit = iNo % 10;

            iRev = iRev * 10 + iDigit;

            iNo = iNo / 10;
        }

        if(iTemp == iRev)
        {
            System.out.println("Number Is palindrome");
        }
        else
        {
            System.out.println("Number iS not palindrome");
        }
    }
}

class Palindrome
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);
    
        Number nobj = new Number();
        int iValue = 0;

        System.out.println("Enter A Number");
        iValue = sobj.nextInt();

        nobj.CheckPalindrome(iValue);
    }
}