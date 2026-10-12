import java.io.*;

class Binputx 
{
    public static void main(String a[])
    {
        try
        {

          BufferedReader bobj = new BufferedReader(new InputStreamReader(System.in));
        
          System.out.println("enter your name:");
          String name = bobj.readLine();

          System.out.println("Welcome:"+name);
        }
        catch(IOException obj)
        {}
    }
}