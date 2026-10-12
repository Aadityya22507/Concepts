class demo extends Thread
{
    public void run()
    {
        try
        {
            int i = 0;
            String name = Thread.currentThread().getName();
            for(i = 0; i <= 1000;i++)
            {
                System.out.println("Running thread : "+name+" with value i :"+i);
                Thread.sleep(5000);
            }   
        }
        catch(Exception obj)
        {

        }
    }

}

class mulit4
{
    public static void main(String a[])
    {
        System.out.println("Current thread is : "+Thread.currentThread().getName());
        demo obj1 = new demo();
        demo obj2 = new demo();

        obj1.setName("PPA");
        obj2.setName("LB");

        obj1.start();
        obj2.start();
    }
}