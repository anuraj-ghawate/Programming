import java.util.*;
class Number
{
    public void Product(int iNo)
    {
       int iDigit = 0, iProduct = 0;

       iProduct  = 1;
         while (iNo != 0)
        {
            iDigit = iNo % 10;
            iProduct = iProduct * iDigit;
            iNo = iNo / 10;
        }

        System.out.println("Product Of Digits Of Given Number Is : "+iProduct);
        
    }

}

class ProductDigit
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);
        int iValue1 = 0;

        System.out.println("Enter A Number");
        iValue1 = sobj.nextInt();

        Number nobj = new Number();

        nobj.Product(iValue1);

    }
}