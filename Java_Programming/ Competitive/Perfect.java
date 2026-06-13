import java.util.*;

class Number
{
    boolean CheckPerfect(int iNo)
    {
        int iCnt = 0;
        int iSumDiv = 0;
        for(iCnt = 1; iCnt <= iNo / 2; iCnt++)
        {
            if(iNo % iCnt == 0)
            {
                iSumDiv = iSumDiv + iCnt;
            }
            if(iSumDiv > iNo)
            {
                break;
            }
        }
       
        if (iSumDiv == iNo)
        {
            return true;
        }
        else
        {
            return false;
        }
    }

}
class Perfect
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);
        int iValue = 0;

        System.out.println("Enter A Number");
        iValue = sobj.nextInt();

        Number nobj = new Number();
        boolean bRet = false;

        bRet = nobj.CheckPerfect(iValue);

        if(bRet)
        {
            System.out.println("Number is Perfect");
        }
        else
        {
            System.out.println("Number Is not Perfect");
        }

    }
}