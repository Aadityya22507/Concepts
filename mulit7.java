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
                
            }   
        }
        catch(Exception obj)
        {

        }
    }

}

class mulit7
{
    public static void main(String a[])
    {
        System.out.println("Current thread is : "+Thread.currentThread().getName());
        demo obj1 = new demo();
        demo obj2 = new demo();

        obj1.setName("PPA");
        obj2.setName("LB");

        System.out.println("priority of obj1 is :"+obj1.getPriority());
        System.out.println("priority of obj1 is :"+obj1.getPriority());

        obj1.setPriority(10);
        obj2.setPriority(10);

        System.out.println("priority of obj1 is :"+obj1.getPriority());
        System.out.println("priority of obj1 is :"+obj2.getPriority());

        obj1.start();
        obj2.start();
    }
}