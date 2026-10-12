class demo extends Thread
{
    public void run()
    {
        try
        {
            int i = 0;
            String name = Thread.currentThread().getName();
            for(i = 0; i <= 10;i++)
            {
                System.out.println("Running thread : "+name+" with value i :"+i);
                Thread.sleep(1000);
            }   
        }
        catch(Exception obj)
        {

        }
    }

}

class mulit6
{
    public static void main(String a[]) throws Exception
    {
    
        System.out.println("Current thread is : "+Thread.currentThread().getName());
        demo obj1 = new demo();
        obj1.setName("PPA");
        obj1.start();

        obj1.join();
        System.out.println("End of main thread");
        
    }
}