class Student implements Cloneable
{
    public String Name;
    public int Marks;
    public int Age;

    public Student(String str , int A , int B)
    {
        this.Name = str;
        this.Marks = A;
        this.Age = B;
    }
    public Object clone() throws CloneNotSupportedException
    {
        return super.clone();
    }
}


class Copydemo
{
    public static void main(String a[])
    {
        try
        {
        Student sobj = new Student("Amit", 87, 25);
        System.out.println("Name os student :"+sobj.Name);
        System.out.println("Marks of student:"+sobj.Marks);        
        System.out.println("Age of student :"+sobj.Age);

        Student sobjX = (Student)sobj.clone();
        System.out.println("Name os student :"+sobjX.Name);
        System.out.println("Marks of student:"+sobjX.Marks);        
        System.out.println("Age of student :"+sobjX.Age);
        }
        catch(Exception obj)
        {}
    }
}
