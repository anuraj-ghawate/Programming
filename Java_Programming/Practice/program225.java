import java.util.*;
/*
    iRow = 4
    iCol = 4

    a 
    a b 
    a b c
    a b c d
   
*/

class Pattern
{
    public void Display(int iRow, int iCol)
    {
        int i = 0, j = 0;

        //  Filter For Diagonal Pattern
        if(iRow != iCol)
        {
            System.out.println("INVALID PARAMETERS");
            System.out.println("Number Of Rows And Columns Should Be Same");
            return;
        }

        char ch = '\0';

        for(i = 1; i <= iRow; i++)
        {
            for(j = 1, ch = 'a'; j <= i; j++,ch++)
            {
                System.out.print(ch+"\t");
            }

            System.out.println();
        }
    }
}

class program225
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