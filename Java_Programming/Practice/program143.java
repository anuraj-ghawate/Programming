import java.util.*;

class program143
{
    public static  int Summation(int Arr[])
    {
        int iSum = 0;
        int iCnt = 0;

        for(iCnt = 0; iCnt < Arr.length; iCnt++)
        {
            iSum = iSum + Arr[iCnt];
        }

        return iSum;
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

        System.out.println("Elements Of The Array Are : ");

        for(iCnt = 0; iCnt < Brr.length; iCnt++)
        {
           System.out.println(Brr[iCnt]);
        }

        int iRet = Summation(Brr);

        System.out.println("Summation Of Elements Are : "+iRet);


        Brr = null;

        System.gc();

    }
}