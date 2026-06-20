class Logic
{
    void sumOfDigits(int num)
    {
        int iSum = 0, iDigit = 0;
        while(num > 0)
        {
            iDigit = num % 10;
            iSum = iSum + iDigit;
            num = num / 10;
        }
        System.out.println("Summation is : " + iSum);
    }
}

class Program17_1
{
    public static void main(String A[])
    {
        Logic lobj = new Logic();
        lobj.sumOfDigits(1234);
    }
}