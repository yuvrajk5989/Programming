// WAP to check number is prime or not

import java.util.*;

class Logic
{
    private int iNo;

    Logic(int N)
    {
        this.iNo = N;
    }

    public void checkPrime()
    {
        int iCnt = 0, iCount = 0;

        if(iNo == 1)
        {
            System.out.println("1 is neither prime nor composite");
        }
        for (iCnt = 2; iCnt <= (iNo / 2); iCnt++)
        {
            if((iNo % iCnt) == 0)
            {
                iCount++;
                break;
            }
        }
        if(iCount == 0)
        {
            System.out.println("Number is prime");
        }
        else
        {
            System.out.println("Number is not prime");
        }
    }
}

class Program18_1
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);

        int iValue = 0;

        System.out.println("Enter the number : ");
        iValue = sobj.nextInt();

        Logic lobj = new Logic(iValue);

        lobj.checkPrime();

        sobj.close();
    }
}