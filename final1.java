class demo
{
    public int no1;
    public final int no2;

    public demo()
    {
        no1 = 11;
        no2 = 21;
    }
}

class final1
{
    public static void main(String a[])
    {
        demo obj = new demo();

        obj.no1++;
        obj.no2++; //obj.no2 = obj.no2 1;

    }
}