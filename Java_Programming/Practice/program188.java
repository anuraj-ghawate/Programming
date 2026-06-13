//Input : 11
// Output : * * * # # # * * * # #

import java.util.*;

class program188
{
   public static void Display(int iNo)
    {
        int iCnt = 0;

        for(iCnt = 1; iCnt <= 11; iCnt++)
        {
            if((iCnt >= 1 && iCnt <= 3) || (iCnt >= 7 && iCnt <= 9))
            {
                System.out.print("*\t");
            }
            else
            {
                System.out.print("#\t");
            }
        }
       
    }

    public static void main(String []A)
    {
        Scanner sobj = new Scanner(System.in);
        int iValue = 0;

        System.out.println("Enter the Number Of Elements : ");
        iValue = sobj.nextInt();

        Display(iValue);
        
    }
}