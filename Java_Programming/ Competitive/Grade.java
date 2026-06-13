import java.util.*;

class Number
{
    public void Grade(int iMarks)
    {
        if(iMarks > 90)
        {
            System.out.println("Garde : A+");
        }
        else if(iMarks > 80)
        {
            System.out.println("Grade : A");
        }
        else if(iMarks > 65)
        {
            System.out.println("Grade : B+");
        }
        else if(iMarks > 55)
        {
            System.out.println("Grade : B");
        }
        else if(iMarks > 45)
        {
            System.out.println("Grade : C+");

        }
        else if(iMarks > 35)
        {
            System.out.println("Grade : C");
        }
        else
        {
            System.out.println("Grade : F");
        }

    }
}

class Grade
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);
        int iValue = 0;

        System.out.println("Enter The Marks");
        iValue = sobj.nextInt();

        Number nobj = new Number();

        nobj.Grade(iValue);

    }
}