import java.util.*;

class program179
{
   public static void Display(int iNo)
    {
        int iCnt = 0;
        char Ch = 'a';
       
        for(iCnt = 1; iCnt <= iNo; iCnt++)
        {
            System.out.print(Ch+"\t");
            Ch++;
        }

        System.out.println();
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