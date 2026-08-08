import java.io.*;

class program661
{
    public static void main(String A[])
    {
        File fobj = null;

        boolean bRet = false;

        try
        {
            fobj = new File("Demo.txt");

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
