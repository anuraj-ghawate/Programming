import java.util.*;

class program145
{
    public static void Update(int Arr[])
    {
        int iCnt = 0;

        for(iCnt = 0; iCnt < Arr.length; iCnt++)
        {
           Arr[iCnt]++;
        }

     }
     

    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);

        int iCnt = 0;

        System.out.println("Enter The Number Of Elements : ");
        int iLength = sobj.nextInt();

        int Brr[] = new int[iLength];
        
        System.out.println("Enter the Elements : ");

        for(iCnt = 0; iCnt < Brr.length; iCnt++)
        {
            Brr[iCnt] = sobj.nextInt();
        }

        System.out.println("Elements Before Function Call: ");

        for(iCnt = 0; iCnt < Brr.length; iCnt++)
        {
           System.out.println(Brr[iCnt]);
        }

        Update(Brr);

        System.out.println("Elements After Function Call: ");

        for(iCnt = 0; iCnt < Brr.length; iCnt++)
        {
           System.out.println(Brr[iCnt]);
        }
       

        Brr = null;

        System.gc();

    }
}