package file2;
import java.io.FileWriter;
class file2
{
    public static void main(String args[])
    {
        String message = "Anthada Nokkunne";

        try
        {
            FileWriter fw = new FileWriter("sample.txt");
            fw.write(message);
            System.out.println("Message written to that file !");
            fw.close();
        }
        catch(Exception e)
        {
            System.out.println("Error Occurred !");
        }
    }
}