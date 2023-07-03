import java.io.*;
import java.util.*;
class file1_2
{
    public static void main(String args[])
    {
        try
        {
            Writer w = new FileWriter("file1.txt");
            Scanner read = new Scanner(System.in);
            System.out.print("Enter the text to be written: ");
            String s = read.nextLine();
            w.write(s);
            w.close();
            read.close();
            Reader r = new FileReader("file1.txt");
            int ch;
            ch=r.read();
            while(ch!=-1)
            {
                System.out.print((char)ch);
                ch=r.read();
            }
            System.out.println();
            r.close();
        }
        catch(FileNotFoundException e)
        {
            System.out.print(e.getMessage());
        }
        catch(IOException e)
        {
            System.out.print(e.getMessage());
        }
    }
}
