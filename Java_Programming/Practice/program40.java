//Type 2

import java.util.*;

class program40
{
    void CheckDivisible(int iNo)
    {
        if((iNo % 3 == 0) && (iNo % 5 == 0))
        {
            System.out.println("Number Is Disible By 3 & 5");
        }
        else
        {
            System.out.println("Number Is Not Divisible By 3 & 5");
        }

    }


    public static void main(String A[])
    {
        Scanner sObj = new Scanner(System.in);
        int iValue = 0;

        System.out.println("Enter The Number : ");
        iValue = sObj.nextInt();

        CheckDivisible(iValue); //Error

        
    }
}