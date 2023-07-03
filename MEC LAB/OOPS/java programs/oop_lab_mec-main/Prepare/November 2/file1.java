import java.io.*;
import java.util.*;
class file
{
    public static void main(String args[])
    {
        try
        {
            Writer w = new FileWriter("file1.txt");
            Scanner sc = new Scanner(System.in);
            System.out.println("Enter what to be inputted: ");  
            String s = sc.nextLine();
            w.write(s);
            w.close();
            sc.close();
        }
        catch(Exception e)
        {
            System.out.println(e.getMessage());
        }
        
        try
        {
            Reader r = new FileReader("file1.txt");
            int ch;
            ch = r.read();
            while(ch!=-1)
            {
                System.out.print((char)ch);
                ch=r.read();
            }
            r.close();
        }
        catch(Exception e)
        {
            System.out.println(e.getMessage());
        }
    }
}
