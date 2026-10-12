/*
 * getclass()
 * hashcode()
 * equals()
 * clone()
 * finalize()
 */

 class Marvellous
 {}

// class Objestdemo extends Object
class Objectdemo
{
    public static void main(String a[])
    {
        Object obj = new Marvellous();
        System.out.println(obj.getClass().getName());
    }
}