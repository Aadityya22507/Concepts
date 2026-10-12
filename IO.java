import java.util.Scanner;

class IO
{
    public static void main(String a[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("enter your first number");
        int No1 = sobj.nextInt();

        System.out.println("enter your second number");
        int No2 = sobj.nextInt();

        int Ans = No1 + No2;

        System.out.println("addition is:"+Ans);


    }
}