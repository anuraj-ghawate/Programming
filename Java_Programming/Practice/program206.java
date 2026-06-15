import java.util.*;
/*
    iRow = 4
    iCol = 4;

    a b c d
    1 2 3 4 
    a b c d
    1 2 3 4
*/

class Pattern
{
    public void Display(int iRow, int iCol)
    {
        int i = 0, j = 0;
        char Ch = '\0';

        for(i = 1; i <= iRow; i++)
        {
            if(i % 2 == 0)
            {
                for(j = 1; j <= iCol; j++)
                {
                    System.out.print(j+"\t");
                }
            }
            else
            {
                for(j = 1, Ch = 'a'; j <= iCol; j++,Ch++)
                {
                    System.out.print(Ch+"\t");
                }

            }
            

            System.out.println();
        }
    }
}

class program206
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);
        int iValue1 = 0, iValue2 = 0;

        System.out.println("Enter Number Of Rows : ");
        iValue1 = sobj.nextInt();

        System.out.println("Enter Number Of Columns : ");
        iValue2 = sobj.nextInt();

        Pattern pobj = new Pattern();

        pobj.Display(iValue1, iValue2);
        
    }
}