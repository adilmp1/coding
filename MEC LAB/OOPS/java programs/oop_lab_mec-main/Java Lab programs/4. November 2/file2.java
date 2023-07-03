import java.io.*;
import java.util.*;
class file2
{
    public static void main(String args[])
    {
        try
        {
            FileOutputStream w = new FileOutputStream("fi.txt");
            Scanner read = new Scanner(System.in);
            System.out.print("Enter the text to be written: ");
            String s = read.nextLine();
            byte b[] = s.getBytes();
            w.write(b);
            w.close();
            read.close();
            FileInputStream r = new FileInputStream("file2.txt");
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
