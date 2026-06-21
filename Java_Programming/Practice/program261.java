import java.util.*;

class program261
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);
        
        String Arr = null;

        System.out.println("Enter A String");
        Arr = sobj.nextLine();

        // Error
        System.out.println(Arr[0]);
        System.out.println(Arr[1]);

    }
}