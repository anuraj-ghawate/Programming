import java.util.*;

class Number
{
    public void Minimum(int iNo1, int iNo2,int iNo3)
    {
        if(iNo1 < iNo2 && iNo1 < iNo3)
        {
            System.out.println(iNo1+" : is Minimum");
        }
        else if(iNo2 < iNo1 && iNo2 < iNo3)
        {
            System.out.println(iNo2+" : is Minimum");
         
        }
        else
        {
            System.out.println(iNo3+" : Is Minimum");
        }
    }
}

class Minimum
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);
    
        Number nobj = new Number();
        int iValue1 = 0, iValue2 = 0, iValue3 = 0;

        System.out.println("Enter A  First Number");
        iValue1 = sobj.nextInt();

        System.out.println("Enter A  Second Number");
        iValue2 = sobj.nextInt();

        System.out.println("Enter A  Third Number");
        iValue3 = sobj.nextInt();

        nobj.Minimum(iValue1,iValue2,iValue3);
    }
}