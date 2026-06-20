// WAP to check number id positive negative or zero

import java.util.*;

class Logic 
{
    private int iNo;

    Logic (int N)
    {
        this.iNo = N;
    }

    public void checkSign()
    {
        if (iNo > 0)
        {
            System.out.println("Number is even");
        }
        else if(iNo == 0)
        {
            System.out.println("Number is 0");
        }
        else
        {
            System.out.println("Number is negative");
        }
    }
}

class Program17_5 
{   
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);

        int iValue = 0;

        System.out.println("Enter the number : ");
        iValue = sobj.nextInt();

        Logic lobj = new Logic (iValue);

        lobj.checkSign();

    }
}
