// WAP to find the sum of even and odd digits 

import java.util.*;

class Logic 
{
    private int iNo;
    
    public Logic(int N) 
    {  
        this.iNo = N;
    }

    public void sumOddEven()
    {
        int iDigit = 0, EvenSum = 0, OddSum = 0;

        while (iNo != 0) 
        { 
            iDigit = iNo % 10;
            if ((iDigit % 2) == 0)
            {
                EvenSum = EvenSum + iDigit;
            }
            else
            {
                OddSum = OddSum + iDigit;
            }
            iNo = iNo / 10;
        }

        System.out.println("Sum of even digits " + EvenSum);
        System.out.println("Sum of odd digits " + OddSum);
    }
}

class Program17_4 
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);        
        int iValue = 0;

        System.out.println("Enter the number : ");
        iValue = sobj.nextInt();

        Logic lobj = new Logic(iValue);

        lobj.sumOddEven(); 
    }
}
