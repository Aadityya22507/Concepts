import java.io.*;

class Binputxx 
{
    public static void main(String a[])
    {
        try
        {

          BufferedReader bobj = new BufferedReader(new InputStreamReader(System.in));
        
          System.out.println("enter first number:");
          int No1 = Integer.parseInt(bobj.readLine());

          System.out.println("enter second number:");
          int No2 = Integer.parseInt(bobj.readLine());

          int Ans = No1 + No2;

          System.out.println(Ans);
        }
        catch(IOException obj)
        {}
    }
}