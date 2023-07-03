package file4;
import java.io.FileReader;
class file3
{
    public static void main(String args[])
    {
        try
        {
            FileReader fr = new FileReader("sample.txt");
            int c,sum=0;
            System.out.print(sum);
            do
            {
                c=fr.read();
                System.out.print(c);
                // if(c!='\n')
                // {
                //     sum+=c;
                // }
            }
            while(c!=-1);
            fr.close();

        }
        catch(Exception e)
        {
            System.out.println("Error Occurred !");
        }
    }
}