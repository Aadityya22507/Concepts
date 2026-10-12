
import java.util.*;

class AgeInvaild extends Exception
{

}

class user
{
    public static void main(String a[])
    {
        try
        {
            Scanner sobj = new Scanner(System.in);

            System.err.println("Please enter your age:");
            int Age = sobj.nextInt();

            if(Age < 18)
            {
            throw new AgeInvaild();
            }
            else
            {
                System.out.println("you succesfully loged in on the site");
            }
        }
        catch(AgeInvaild obj)
        {
            System.out.println("Age is invaild to register for this site");
        }

    }
}