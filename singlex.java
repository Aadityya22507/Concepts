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

class singlex
{
    public static void main(String A[])
    {
        base bobj1 = new base();
        derived dobj = new derived();
        
        
        
    }
}