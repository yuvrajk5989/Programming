import java.util.*;

class StringX
{
    public int CountCapital(String str)
    {
        int iCnt = 0, iCount = 0;
        char Arr[] = str.toCharArray();

        for (iCnt = 0 ; iCnt < Arr.length; iCnt++)
        {
            if (Arr[iCnt] >= 'A' && Arr[iCnt] <= 'Z')
            {
                iCount++;
            }
        }
        return iCount;
    }
}

class Program31_1
{
    public static void main(String A[])
    {
        int iRet = 0;
        Scanner sobj = new Scanner(System.in);
        String str = null;
        StringX strobj = new StringX();

        System.out.println("Enter the string : ");
        str = sobj.nextLine();

        iRet = strobj.CountCapital(str);

        System.out.println("Capital characters are : " + iRet);

    }
}