class Marvellous 
{
    synchronized public void display(int no)
    {
        try
        {

            int i = 0;
            for(i =1 ; i <=10 ; i++)
            {
            System.out.println(i*no);
            Thread.sleep(1000);
            }
        }
        catch(Exception obj)
        {}
    }
}

class demo extends Thread
{
    public void run()
    {
        Marvellous mobj = new Marvellous();
        mobj.display(5); 
    }
}

class hello extends Thread
{
    public void run()
    {
        Marvellous mobj = new Marvellous();
        mobj.display(2);   
    }
}


class mulit9
{
    public static void main(String a[])
    {
        demo dobj = new demo();
        hello hobj = new hello();

        dobj.start();
        hobj.start();


    }
}