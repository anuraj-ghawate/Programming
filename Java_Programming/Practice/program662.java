import java.io.*;
import java.util.*;

class program662
{
    public static void main(String A[])
    {
        File fobj = null;
        boolean bRet = false;
        String Fname = null;
        Scanner sobj = null;

        sobj = new Scanner(System.in);

        System.out.println("Enter The File Name :");
        Fname = sobj.nextLine();


        try
        {
            fobj = new File(Fname);

            bRet = fobj.exists();

            if(bRet == true)
            {
                fobj.delete();
                System.out.println("File Gets Deleted");
            }
            else
            {
                System.out.println("There Is No Such File Present");
            }
             
        }
        catch(Exception eobj)
        {
             System.out.println(eobj);
        }       

    }
    
}
