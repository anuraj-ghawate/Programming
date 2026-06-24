import java.util.*;

class StringX
{
    public int CountCapital(String str)
    {
        int i = 0, iCount = 0;

        char Arr[] = str.toCharArray();

        for(i = 0; i < Arr.length; i++)
        {
            if(Arr[i] >= 'A' && Arr[i] <= 'Z')
            {
                iCount++;
            }
        }

        return iCount;
    }

    public int CountSmall(String str)
    {
        int i = 0, iCount = 0;

        char Arr[] = str.toCharArray();


        for(i = 0; i < Arr.length; i++)
        {
            if(Arr[i] >= 'a' && Arr[i] <= 'z')
            {
                iCount++;
            }
        }

        return iCount;
    }

    public int CountDigitsl(String str)
    {
        int i = 0, iCount = 0;

        char Arr[] = str.toCharArray();


        for(i = 0; i < Arr.length; i++)
        {
            if(Arr[i] >= '0' && Arr[i] <= '9')
            {
                iCount++;
            }
        }

        return iCount;
    }
}

class program273
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

         iRet = strobj.CountDigitsl(data);

        System.out.println("Number Of digits are : "+iRet);

    }
}