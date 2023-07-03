import java.util.Scanner;
class fibonocci{
    public static void main(String[] args)
    {
        Scanner read = new Scanner(System.in);
        int i, a=0, b=1, c=0;
        System.out.print("Enter the number of terms: ");
        int n = read.nextInt();
        for(i=1;i<=n;i++)
        {
            System.out.println(a);
            c=a+b;
            a=b;
            b=c;
        }
        
    }
}