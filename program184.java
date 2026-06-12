import java.util.*;

class program184
{
    public static void Display(int iNo)
    {
        int iCnt = 0;
        char Ch = 'A';

        for(iCnt = 1; iCnt <= iNo; iCnt++)
        {
            if(iCnt % 2 != 0)
            {
                System.out.print(Ch + "\t");
                Ch++;
            }
            else
            {
                System.out.print("*\t");
            }
        }

        System.out.println();
    }

    public static void main(String []A)
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter Number : ");
        int iValue = sobj.nextInt();

        Display(iValue);
    }
}