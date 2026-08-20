import java.io.*;
import java.util.*;

class program685
{
    public static void main(String A[]) throws Exception
    {
       Scanner sobj = new Scanner(System.in);
       String FolderName = null;

       System.out.println("Enter Folder Name : ");
       FolderName = sobj.nextLine();

       File fobj = new File(FolderName);

       if(fobj.exists())
       {
         System.out.println("Folder Exist");
       }
       else
       {
         System.out.println("Folder Is Not Exist");
       }
    }    
}
