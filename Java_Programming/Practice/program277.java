import java.util.*;
import Marvellous.StringX;

class program276
{   
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);

        StringX strobj = new StringX(); //Error
        int iRet = 0;
        
        String data = null;

        System.out.println("Enter String :");
        data = sobj.nextLine();

        iRet = strobj.CountCapital(data);

        System.out.println("Number Of Capital Characters is : "+iRet);

        iRet = strobj.CountSmall(data);

        System.out.println("Number Of Small Characters is : "+iRet);

         iRet = strobj.CountDigitsl(data);

        System.out.println("Number Of Digit Are : "+iRet);

        iRet = strobj.CountSpace(data);

        System.out.println("Number OF White Spaces Are : "+iRet);

        iRet = strobj.CountSpecial(data);

        System.out.println("Number OF Special Symbols  Are : "+iRet);

    }
}