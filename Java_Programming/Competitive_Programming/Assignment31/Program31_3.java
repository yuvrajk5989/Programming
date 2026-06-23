import java.util.*;

class StringX
{
    public int Difference(String str)
    {
        char Arr[] = str.toCharArray();

        int iCnt = 0, CountSmall = 0, CountCapital = 0, iDiff = 0;
        
        for (iCnt = 0; iCnt < Arr.length; iCnt++)
        {
            if (Arr[iCnt] >= 'A' && Arr[iCnt] <= 'Z')
            {
                CountCapital++;
            }
            else if(Arr[iCnt] >= 'a' && Arr[iCnt] <= 'z')
            {
                CountSmall++;
            }
            else
            {
                return 0;
            }
        }
        iDiff = CountSmall - CountCapital;

        return iDiff;
    }
}

class Program31_3
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner (System.in);
        String str = null;
        StringX strobj = new StringX();
        int iRet = 0;

        System.out.println("Enter the string : ");
        str = sobj.nextLine();

        iRet = strobj.Difference(str);

        System.out.println("Difference is : " + iRet);
    }
}