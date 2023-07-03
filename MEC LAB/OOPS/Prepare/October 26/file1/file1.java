package file1;
import java.io.File;

class file1
{
    public static void main(String args[])
    {
        File f = new File("sample.txt");

        try{
            boolean status = f.createNewFile();

            if(status)
            {
                System.out.println("New file was created");
            }
            else
            {
                System.out.println("File already exists");
            }
        }
        catch(Exception e)
        {
            System.out.println("An error occurred");
        }
    }
}