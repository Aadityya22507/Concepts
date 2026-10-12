class base
{
    public int a , b;
    public base()
    {
        System.out.println("base constructor");
    }
    public void fun()
    {
        System.out.println("inside base fun");
    }
}

class derived extends base
{
    public int x , y;
    public derived()
    {
        System.out.println("derived constructor");
    }
    public void gun()
    {
        System.out.println("inside derived gun");
    }
}

class single
{
    public static void main(String A[])
    {
        derived dobj = new derived();
        dobj.fun();
        dobj.gun();
        
    }
}