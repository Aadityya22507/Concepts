class demo
{
    public int addition(int a , int b)
    {
        return a + b;
    }
    public int addition(int a , int b , int c)
    {
        return a + b + c;
    }
    public double addition(double a , double b)
    {
        return a + b;
    }
    public void fun(int a , double b)
    {}
    public void gun(double a , int b)
    {}
}

class overloading
{
    public static void main(String a[])
    {
        demo dobj = new demo();
        int iRet = 0;
        double dRet = 0.0;

        iRet = dobj.addition(10, 20);
        System.out.println(iRet);
        iRet = dobj.addition(10, 20, 30);
        System.out.println(iRet);
        dRet = dobj.addition(10.0, 20.0);
        System.out.println(dRet);



    }
}