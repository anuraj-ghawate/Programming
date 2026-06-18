import java.util.*;
/*
    iRow = 4
    iCol = 4

    a
    b b
    c c c
    d d d d

   
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

        for(i = 1,ch = 'a'; i <= iRow; i++,ch++)
        {
            for(j = 1; j <= i; j++)
            {
                System.out.print(ch+"\t");
            }

            System.out.println();
        }
    }
}

class program226
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