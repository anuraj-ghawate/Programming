import java.io.*;
import java.util.*;

class program687
{
    public static void main(String A[]) throws Exception
    {
       Scanner sobj = new Scanner(System.in);
       String FolderName = null;

       System.out.println("Enter Folder Name : ");
       FolderName = sobj.nextLine();

       File fobj = new File(FolderName);

       if((fobj.exists()) &&(fobj.isDirectory()))
       {
         System.out.println("Folder Exist");

         File fArr[] = fobj.listFiles();

         System.out.println("Number Of Files In Folder : "+fArr.length);
       }
       else
       {
         System.out.println("Folder Is Not Exist");
       }
    }
    
}
