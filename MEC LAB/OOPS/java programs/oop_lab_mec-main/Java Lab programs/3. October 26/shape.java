abstract class Shape
{
    abstract void numberOfSides();
    public static void main(String args[])
    {
        Triangle s1 = new Triangle();
        Rectangle s2 = new Rectangle();
        Hexagon s3 = new Hexagon();
        s1.numberOfSides();
        s2.numberOfSides();
        s3.numberOfSides();
    }
}
class Triangle extends Shape
{
    void numberOfSides()
    {
        System.out.println("Number of sides of triangle = 3");
    }
}
class Rectangle extends Shape
{
    void numberOfSides()
    {
        System.out.println("Number of sides of Rectangle = 4");
    }
}

class Hexagon extends Shape
{
    void numberOfSides()
    {
        System.out.println("Number of sides of Hexagon = 6");
    }
}