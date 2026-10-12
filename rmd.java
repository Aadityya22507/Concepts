class base
{
    public int a , b;
    public void fun()
    { System.out.println("inside base fun"); }
    public void gun()
    { System.out.println("inside base gun"); }
    public void sun()
    { System.out.println("inside base sun"); }
    public void run()
    { System.out.println("inside base run"); }
    
}

class derived extends base
{
    public int x , y;
    public void gun()
    { System.out.println("inside derived gun"); }
    public void run()
    { System.out.println("inside derived run"); }
    public void mun()
    { System.out.println("inside derived mun"); }

}

class rmd
{
    public static void main(String A[])
    {
        base bobj = new derived();
        bobj.fun();
        bobj.gun();
        bobj.sun();
        bobj.run();
        bobj.mun();

       
    }
}