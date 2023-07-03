import java.util.Scanner;
class factorial {
    public static void main(String[] args)
    {
        Scanner read = new Scanner(System.in);
        System.out.print("Enter the number: ");
        int i, n = read.nextInt(),fact=1;
        for(i=1;i<=n;i++)
        {
            fact*=i;
        }
        System.out.print("factorial of number = "+fact);
    }
}
