import java.util.*;
/*
    iRow = 4
    iCol = 4;

    a b c d
    a b c d
    a b c d
    a b c d
*/

class Pattern
{
    public void Display(int iRow, int iCol)
    {
        int i = 0, j = 0;
        char Ch = '\0';

        for(i = 1; i <= iRow; i++)
        {
            for(j = 1, Ch = 97 ; j <= iCol; j++,Ch++)
            {
                System.out.print(Ch+"\t");
            }

            System.out.println();
        }
    }
}

class program205
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