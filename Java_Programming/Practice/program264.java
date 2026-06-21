import java.util.*;

class program264
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);
        
        String Arr = null;

        System.out.println("Enter A String");
        Arr = sobj.nextLine();

        int iCnt = 0;

        for(iCnt = 0; iCnt < Arr.length(); iCnt++)
        {
            System.out.println(Arr.charAt(iCnt));
        }

    }
}