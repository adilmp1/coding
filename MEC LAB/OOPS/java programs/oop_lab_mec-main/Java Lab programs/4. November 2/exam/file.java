import java.util.*;
import java.io.*;
class file
{
    public static void main(String[] args) {
        try
        {
            Scanner read = new Scanner(System.in);
            Writer w = new FileWriter("stream.txt");
            String s;
            System.out.print("enter the text to be added to the file: ");
            s = read.nextLine();
            w.write(s);
            w.close();
            Reader r = new FileReader("stream.txt");
            int ch = r.read();
            while(ch!=-1)
            {
                System.out.print((char)ch);
                ch=r.read();
            }
            r.close();
            read.close();
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