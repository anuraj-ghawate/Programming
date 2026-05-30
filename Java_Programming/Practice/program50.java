import java.util.*;

class NumberX
{
    public boolean CheckPerfect(int iNo)
    {
        int iCnt = 0;
        int iSum = 0;

        for(iCnt = 1; iCnt <= (iNo / 2); iCnt++)
        {
            if((iNo % iCnt == 0))
            {
                iSum = iSum + iCnt;
            }
        }

        if(iSum == iNo)
        {
            return true;
        }
        else
        {
            return false;
        }
    }

}

class program50

{
    public static void main(String A[])
    {
        Scanner sObj = new Scanner(System.in);
        int iValue = 0;
        boolean bRet = false;

        System.out.println("Enter The Number : ");
        iValue = sObj.nextInt();

        NumberX nObj = new NumberX();

        bRet = nObj.CheckPerfect(iValue);

        if(bRet)
        {
            System.out.println("Number Is Perfect");
        }
        else
        {
            System.out.println("Number Is Not Perfect");
        }
    }
}
// Time Complexity : O(N/2)
// Where N >= 0