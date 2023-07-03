import java.io.*;
import java.util.*;
class file2
{
    public static void main(String[] args)
    {
        try
        {
            FileOutputStream w = new FileOutputStream("file2.txt");
            Scanner sc = new Scanner(System.in);
            System.out.print("Enter what to be inputted: ");
            String s = sc.nextLine();
            byte b[] = s.getBytes();
            w.write(b);
            w.close();
            sc.close();
        }
        catch(FileNotFoundException e)
        {
            System.out.print(e.getMessage());
        }
        catch(IOException e)
        {
            System.out.print(e.getMessage());
        }
        try
        {
            FileInputStream r = new FileInputStream("file2.txt");
            int ch;
            ch=r.read();
            while(ch!=-1)    
            {
                System.out.print((char)ch);
                ch=r.read();
            }
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