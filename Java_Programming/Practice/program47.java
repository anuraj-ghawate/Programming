import java.util.*;

class NumberX
{
    public void DisplayFactors(int iNo)
    {
        int iCnt = 0;

        for(iCnt = 1; iCnt <= (iNo / 2); iCnt++)
        {
            if((iNo % iCnt == 0))
            {
                System.out.println(iCnt);
            }

        }
    }

}

class program47
{
    public static void main(String A[])
    {
        Scanner sObj = new Scanner(System.in);
        int iValue = 0;

        System.out.println("Enter The Number : ");
        iValue = sObj.nextInt();

        NumberX nObj = new NumberX();

        nObj.DisplayFactors(iValue);
    }
}
// Time Complexity : O(N/2)
// Where N >= 0