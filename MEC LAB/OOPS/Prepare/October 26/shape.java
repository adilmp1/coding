abstract class shape
{
    abstract void noOfSides();
}

class triangle extends shape
{
    void noOfSides()
    {
        System.out.println("triangle has 3 sides");
    }
}

class rectangle extends shape
{
    void noOfSides()
    {
        System.out.println("Rectangle has 4 sides");
    }
}

class hexagon extends shape
{
    void noOfSides()
    {
        System.out.println("hexagon has 6 sides");
    }
}
class inheritance
{
    public static void main(String args[])
    {
        rectangle r = new rectangle();
        triangle t = new triangle();
        hexagon h = new hexagon();
        r.noOfSides();
        t.noOfSides();
        h.noOfSides();
    }
}