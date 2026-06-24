import java.util.*;

class StringX
{
    public int CountCapital(String str)
    {
        int i = 0, iCount = 0;

        for(i = 0; i < str.length(); i++)
        {
            if(str.charAt(i) >= 'A' && str.charAt(i) <= 'Z')
            {
                iCount++;
            }
        }

        return iCount;
    }

    public int CountSmall(String str)
    {
        int i = 0, iCount = 0;

        for(i = 0; i < str.length(); i++)
        {
            if(str.charAt(i) >= 'a' && str.charAt(i) <= 'z')
            {
                iCount++;
            }
        }

        return iCount;
    }
}

class program271
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);

        StringX strobj = new StringX();
        int iRet = 0;
        
        String data = null;

        System.out.println("Enter String :");
        data = sobj.nextLine();

        iRet = strobj.CountCapital(data);

        System.out.println("Number Of Capital Characters is : "+iRet);

        iRet = strobj.CountSmall(data);

        System.out.println("Number Of Small Characters is : "+iRet);

    }
}