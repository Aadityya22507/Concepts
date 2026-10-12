import java.io.*;

class Binput 
{
    public static void main(String a[])
    {
        //InputStream iobj = new InputStreamReader(System.in);
       // BufferedReader bobj = new BufferedReader(iobj);

        BufferedReader bobj = new BufferedReader(new InputStreamReader(System.in));
        
        System.out.println("enter your name:");
        String name = bobj . readline();

        System.out.println("Welcome:"+name);
    }
}