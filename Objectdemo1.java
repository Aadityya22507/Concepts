class Marvellous
{
    public int i , j;
    
    public Marvellous()
    {
        System.out.println("Marvellous Constructor");
    }

    protected void finalize()
    {
        System.out.println("Inside finalize method");
    }
}

// class Objestdemo extends Object
class Objectdemo1
{
   public static void main(String a[])
   {
       Marvellous obj = new Marvellous();
       System.out.println(obj.hashCode());
       obj = null;
       System.gc();
   }
}