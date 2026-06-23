import java.util.*;

class StringX
{
    public int CountSmall(String str)
    {
        int iCnt = 0, iCount = 0;
        char Arr[] = str.toCharArray();

        for (iCnt = 0; iCnt < Arr.length; iCnt++)
        {
            if (Arr[iCnt] >= 'a' && Arr[iCnt] <= 'z')
            {
                iCount++;
            }
        }
        return iCount;
    }
}

class Program31_2
{
    public static void main (String A[])
    {
        Scanner sobj = new Scanner(System.in);
        String str = null;
        StringX strobj = new StringX();
        int iRet = 0;

        System.out.println("Enter the string : ");
        str = sobj.nextLine();

        iRet = strobj.CountSmall(str);

        System.out.println("Small characters are : " + iRet);
    }
}