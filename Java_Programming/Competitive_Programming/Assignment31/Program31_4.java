import java.util.*;

class StringX
{
    public boolean CheckVowel(String str)
    {
        char Arr[] = str.toCharArray();
        boolean Ret = false;

        int iCnt = 0;
        for (iCnt = 0; iCnt < Arr.length; iCnt++)
        {
            if (Arr[iCnt] == 'a' ||Arr[iCnt] == 'e' || Arr[iCnt] == 'i' || Arr[iCnt] == 'o' || Arr[iCnt] == 'u' ||
                Arr[iCnt] == 'A' || Arr[iCnt] == 'E' || Arr[iCnt] == 'I' || Arr[iCnt] == 'O' || Arr[iCnt] == 'U')
                {
                    Ret =  true;
                }
            
        }
        return Ret;
    }
}

class Program31_4
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);
        String str = null;
        StringX strobj = new StringX();
        boolean bRet = false;

        System.out.println("Enter the string : ");
        str = sobj.nextLine();

        bRet = strobj.CheckVowel(str);

        if (bRet == true)
        {
            System.out.println("It contains vowel");
        }
        else
        {
            System.out.println("It does not contain vowel");
        }
    }
}