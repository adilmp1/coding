import java.io.*;
import java.util.Scanner;
class z1
{
    public static void main(String[] args) {
        try
        {
            Scanner read = new Scanner(System.in);
            String s;
            Writer w = new FileWriter("z1.txt");
            System.out.println("Enter the text to add to the file");
            s=read.nextLine();
            w.write(s);
            w.close();
            Reader r = new FileReader("z1.txt");
            int ch = r.read();
            while(ch!=-1)
            {
                System.out.print((char)ch);
                ch=r.read();
            }
            r.close();
        }
        catch(FileNotFoundException e)
        {
            System.out.println(e.getMessage());
        }
        catch(IOException e)
        {
            System.out.println(e.getMessage());
        }
    }
}