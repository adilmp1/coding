import java.io.*;
import java.util.*;
class file3
{
    public static void main(String args[])
    {
        try
        {
            Writer w = new FileWriter("integers.txt");
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
            Reader r = new FileReader("integers.txt");
            int ch,sum=0;
            ch=r.read();
            while(ch!=-1)
            {
                sum+=(int)ch;
                ch=r.read();
            }
            r.close();
            System.out.print(sum);
        }
        catch(Exception e)
        {
            System.out.print(e.getMessage());
        }
    }
}