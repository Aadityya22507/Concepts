abstract class demo
{
    public int addition(int a, int b)
    {
        return a + b;
    }
    public int sustraction(int a, int b)
    {
        return a - b;
    }
    public abstract int multiplication(int a,int b);
}

class marvellous extends demo
{
    public int division(int a,int b)
    {
        return a/b;
    }
    public int multiplication(int a,int b)
    {
        return a * b;
    }
}
class hello
{
    public static void main(String a[])
    {
        //demo dobj = new demo();
        marvellous mobj = new marvellous();

        System.out.println(mobj.addition(10, 11));
        System.out.println(mobj.sustraction(10, 11));
        System.out.println(mobj.multiplication(10, 11));
        System.out.println(mobj.division(10, 11));

    }
}