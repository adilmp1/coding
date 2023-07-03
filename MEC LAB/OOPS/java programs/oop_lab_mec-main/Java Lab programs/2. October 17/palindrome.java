import java.util.Scanner;
class palindrome
{
    public static void main(String[] args)
    {
    	Scanner read = new Scanner(System.in);
    	System.out.print("Enter a string: ");
    	String str = read.next();
        int i,flag=0;
        int len = str.length();
        for(i=0;i<len;i++)
        {
            if(str.charAt(i)!=str.charAt(len-i-1))
	    {
		flag=1;
	    }
        }
        if(flag==1)
            System.out.println("not palindrome");
        else
            System.out.println("palindrome");
            
    }
	
}
