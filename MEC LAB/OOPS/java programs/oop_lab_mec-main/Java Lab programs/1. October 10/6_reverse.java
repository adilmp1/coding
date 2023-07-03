import java.util.Scanner;
class reverse {
    public static void main(String[] args)
    {
        Scanner read = new Scanner(System.in);
        System.out.print("Enter the number: ");
        int n = read.nextInt(),dig,rev=0;
        while(n!=0)
        {
            dig=n%10;
            rev=rev*10+dig;
            n/=10;
        }
        System.out.print("reverse = "+ rev);
    }
}
