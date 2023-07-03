package file3;
import java.io.FileReader;
class file3
{
    public static void main(String args[])
    {
        char data[] = new char[50];
        try
        {
            FileReader fr = new FileReader("sample.txt");
            fr.read(data);
            System.out.println(data[2]);
            fr.close();

        }
        catch(Exception e)
        {
            System.out.println("Error Occurred !");
        }
    }
}