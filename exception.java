import java.util.Scanner;

class exception
{
    public static void main(String a[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("enter your first number");
        int No1 = sobj.nextInt();

        System.out.println("enter your second number");
        int No2 = sobj.nextInt();

        Float Ans = No1 / No2;

        System.out.println("division is:"+Ans);


    }
}