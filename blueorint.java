
interface Circle
{
     float Radius = 10.5f;
     float PI = 3.14f;

     float Area();
     float Circumfarance();
}

class Marvellous implements Circle
{
    public float Area()
    {
        return PI * Radius * Radius;
    }
    public float Circumfarance()
    {
        return 2 * PI * Radius;
    }
}

class blueorint
{
    public static void main(String a[])
    {
        Marvellous mobj = new Marvellous();

        System.out.println("area is :"+mobj.Area());
        System.out.println("circumfarance is :"+mobj.Circumfarance());

        System.out.println("value of radius is :"+Circle.Radius);
        System.out.println("value of PI is :"+Circle.PI);

        //Circle.PI = 7.12;
    }
}