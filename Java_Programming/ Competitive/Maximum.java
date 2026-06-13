import java.util.*;

class Number
{
    public void Maximum(int iNo1, int iNo2)
    {
        if(iNo1 > iNo2)
        {
            System.out.println(iNo1+" Is Maximum");
        }
        else
        {
            System.out.println(iNo2+" Is Maximum");
        }
        
    }
}

class Maximum
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);
    
        Number nobj = new Number();
        int iValue1 = 0, iValue2 = 0;

        System.out.println("Enter A  First Number");
        iValue1 = sobj.nextInt();

        System.out.println("Enter A  Second Number");
        iValue2 = sobj.nextInt();


        nobj.Maximum(iValue1,iValue2);
    }
}