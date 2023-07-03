import java.util.Scanner;
class frequency	
{
    public static void main(String[] args)
    {
    	Scanner read = new Scanner(System.in);
    	System.out.print("Enter a string: ");
    	String str = read.next();
	char d,e;
        System.out.print("Enter the charcter to be counted: ");
        char c = read.next().charAt(0);
        int i=0,count=0;
	d = Character.toUpperCase(c);
	e = Character.toLowerCase(c);
        for(i=0;i<str.length();i++)
        {
            if(str.charAt(i)==c || str.charAt(i)==d || str.charAt(i)==e)	
                count++;
        }
        System.out.println("frequency of " + c +" = " + count);
    }
	
}
