import java.io.*;
import java.util.*;

class program671
{
    public static void main(String A[]) 
    {
       String Fname = null;
       File fobj = null;
       Scanner sobj = new Scanner(System.in);
    
       System.out.println("Enter The File Name :");
       Fname = sobj.nextLine();

       fobj = new File(Fname);

       if(fobj.exists())
       {
            System.out.println("File Name : "+fobj.getName());
            System.out.println("Absolute Path : "+fobj.getAbsolutePath());
            System.out.println("File Size : "+fobj.length());
       }
       else
       {
            System.out.println("There Is No Such File ");
       }
    }
    
}
