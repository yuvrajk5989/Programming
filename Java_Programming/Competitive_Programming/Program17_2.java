// WAP to print all the even numbers 

import java.util.*;

class Logic
{
    private int iNo;

    public Logic(int X) 
    {
        this.iNo = X;
    }
    
    public void printEvenNumbers()
    {
        int iCnt = 0;
        for (iCnt = 0; iCnt <= iNo; iCnt++)
        {
            if ((iCnt % 2) == 0)
            {
                System.out.println(iCnt);
            }
        }
    }
}

class Program17_2
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);

        int iValue  = 0; 
        System.out.println("Enter the number : ");
        iValue = sobj.nextInt();

        Logic lobj = new Logic(iValue);

        lobj.printEvenNumbers();

        sobj.close();
    }       
}
