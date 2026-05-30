//Type 2

import java.util.*;

class program43
{
   public static boolean CheckDivisible(int iNo)
    {
        if((iNo % 3 == 0) && (iNo % 5 == 0))
        {
            return true;
        }
        else
        {
            return false;
        }

    }


    public static void main(String A[])
    {
        Scanner sObj = new Scanner(System.in);
        int iValue = 0;
        boolean bRet = false;

        System.out.println("Enter The Number : ");
        iValue = sObj.nextInt();

        bRet = CheckDivisible(iValue);

        if(bRet)
        {
            System.out.println("Number Is Divisible By 3 & 5");
        }
        else
        {
            System.out.println("Number Is Not Divisible By 3 & 5");
        
        }

    }
}