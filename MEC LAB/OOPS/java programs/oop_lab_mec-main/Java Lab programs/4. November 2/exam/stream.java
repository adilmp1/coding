import java.util.*;
import java.io.*;
class filestream
{
    public static void main(String[] args) {
        try
        {
            Scanner read = new Scanner(System.in);
            FileOutputStream w = new FileOutputStream("stream.txt");
            String s;
            System.out.print("enter the text to be added to the file: ");
            s = read.nextLine();
            byte b[]=s.getBytes();
            w.write(b);
            FileInputStream r = new FileInputStream("stream.txt");
            int ch = r.read();
            while(ch!=-1)
            {
                System.out.print((char)ch);
                ch=r.read();
            }
        }
        catch(FileNotFoundException e)
        {
            System.out.print(e);
        }
        catch(IOException e)
        {
            System.out.print(e);
        }

    }
}