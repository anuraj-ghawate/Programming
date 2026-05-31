import java.util.*;

class NumberX
{
    public boolean CheckPrime(int iNo)
    {
        int iCnt = 0;

        for(iCnt = 2; iCnt <= (iNo / 2); iCnt++)
        {
            if((iNo % iCnt == 0))
            {
                return false; //Bad Programming Practice
            }
           
        }

        if(iCnt < iNo / 2)
        {
            return false;
        }
        else
        {
            return true;
        }
    }

}

class program67

{
    public static void main(String A[])
    {
        Scanner sObj = new Scanner(System.in);
        int iValue = 0;
        boolean bRet = false;

        System.out.println("Enter The Number : ");
        iValue = sObj.nextInt();

        NumberX nObj = new NumberX();

        bRet = nObj.CheckPrime(iValue);

        if(bRet)
        {
            System.out.println("Number Is Prime");
        }
        else
        {
            System.out.println("Number Is Not Prime");
        }
    }
}
// Time Complexity : O(N/2)
// Where N >= 0