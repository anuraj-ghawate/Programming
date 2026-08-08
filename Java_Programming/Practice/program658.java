import java.io.*;

class program658
{
    public static void main(String A[])
    {
        try
        {
            File fobj = new File("Demo.txt");

            if(fobj.exists())
            {
                System.out.println("File Already Present");
            }
            else
            {
                fobj.createNewFile();
                System.out.println("File Gets Succesfully Created");
            }
             
        }
        catch(IOException iobj)
        {
            System.out.println(iobj);
        }
        catch(Exception eobj)
        {
             System.out.println(eobj);
        }       

    }
    
}
