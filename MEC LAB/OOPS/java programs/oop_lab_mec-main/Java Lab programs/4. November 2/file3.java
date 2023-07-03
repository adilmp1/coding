import java.util.*;
class file3
{
    public static void main(String args[])
    {
        int n,sum=0;
        Scanner read = new Scanner(System.in);
        System.out.print("Enter the expression (with +): ");
        String s = read.nextLine();
        StringTokenizer st = new StringTokenizer(s,"+");
        while(st.hasMoreTokens())
        {
            String temp=st.nextToken();
            n= Integer.parseInt(temp);
            System.out.println(n);
            sum=sum+n;  
        }
        System.out.println("sum = "+sum);
        read.close();
    }
}