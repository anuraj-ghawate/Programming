import java.util.*;

class Number
{
    boolean CheckPrime(int iNo)
    {
        int iCnt = 0;

        if(iNo == 1)
        {
            return true;
        }

        for(iCnt = 2; iCnt <= iNo/2; iCnt++)
        {
            if(iNo % iCnt == 0)
            {
                break;
            }
        }

        if(iCnt == ((iNo/2)+1))
        {
            return true;
        }
        else
        {
            return false;
        }
    }
}

class PrimeX
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);
        int iValue = 0;

        System.out.println("Enter A Number");
        iValue = sobj.nextInt();

        Number nobj = new Number();

        boolean bRet = false;

        bRet=nobj.CheckPrime(iValue);

        if (bRet) 
        {
            System.out.println("Number Is Prime");
        }
        else
        {
            System.out.println("Number is not prime");
        }

    }
}