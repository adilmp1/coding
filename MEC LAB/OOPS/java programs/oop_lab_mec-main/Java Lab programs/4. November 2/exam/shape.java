abstract class shape
{
    abstract void nos();
    public static void main(String[] args) {
        triangle t = new triangle();
        rectangle r = new rectangle();
        hexagon h = new hexagon();
        t.nos();
        r.nos();
        h.nos();
    }
}
class triangle extends shape
{
    public void nos()
    {
        System.out.println("3 sides");
    }
}
class rectangle extends shape
{
    public void nos()
    {
        System.out.println("4 sides");
    }
}
class hexagon extends shape
{
    public void nos()
    {
        System.out.println("6 sides");
    }
}