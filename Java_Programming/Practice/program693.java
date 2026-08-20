import java.io.*;
import java.util.*;

class program693
{
    public static void main(String A[]) throws Exception
    {
       Scanner sobj = new Scanner(System.in);
       String FolderName = null;
       String PackFileName = null;
       int iRet = 0;

       FileOutputStream foobj = null;
       FileInputStream  fiobj = null;

       System.out.println("Enter Folder Name : ");
       FolderName = sobj.nextLine();

       System.out.println("Enter The Name Of Packed File : ");
       PackFileName = sobj.nextLine();


       File fobjfolder = new File(FolderName);

       byte Buffer[] = new byte[1024];

       if((fobjfolder.exists()) &&(fobjfolder.isDirectory()))
       {
         System.out.println("Folder Exist");

         File fobjpack = new File(PackFileName);
        
         fobjpack.createNewFile(); // pack file gets created 

         foobj = new FileOutputStream(fobjpack);

         File fArr[] = fobjfolder.listFiles();

         System.out.println("Number Of Files In Folder : "+fArr.length);


         for(int i = 0; i < fArr.length; i++)
         {
            fiobj = new FileInputStream(fArr[i]);

            System.out.println(fArr[i].getName());
            // write file name and size
            // loop to read from fiobj and write to foobj       

            fiobj.close();
         }

         foobj.close();
         sobj.close();     
       }
       else
       {
         System.out.println("Folder Is Not Exist");
       }
    }
    
}
