import java.util.*;

class NumberX
{
    public void SumFactors(int iNo)
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

        System.out.println("Summation Of factors : "+iSum);
    }

}

class program48
{
    public static void main(String A[])
    {
        Scanner sObj = new Scanner(System.in);
        int iValue = 0;

        System.out.println("Enter The Number : ");
        iValue = sObj.nextInt();

        NumberX nObj = new NumberX();

        nObj.SumFactors(iValue);
    }
}
// Time Complexity : O(N/2)
// Where N >= 0