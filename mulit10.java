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
    public Marvellous obj;

    public demo(Marvellous ref)
    {
        this.obj = ref;
    }
    public void run()
    {
        obj.display(5);
    }
}

class hello extends Thread
{
    public Marvellous obj;

    public hello(Marvellous ref)
    {
        this.obj = ref;
    }
    public void run()
    {
        obj.display(2);   
    }
}


class mulit10
{
    public static void main(String a[])
    {
        Marvellous mobj = new Marvellous();

        demo dobj = new demo(mobj);
        hello hobj = new hello(mobj);

        dobj.start();
        hobj.start();


    }
}