import java.util.*;

class program265
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);
        
        String Arr = null;

        System.out.println("Enter A String");
        Arr = sobj.nextLine();

        char Str[] = Arr.toCharArray();

        int iCnt = 0;

        for(iCnt = 0; iCnt < Str.length; iCnt++)
        {
            System.out.println(Str[iCnt]);
        }

    }
}