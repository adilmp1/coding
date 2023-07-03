import java.util.Scanner;
class sumofn{
    public static void main(String[] args){
        Scanner read = new Scanner(System.in);
        System.out.print("Enter number: ");
        int n = read.nextInt();
        int sum=0, i;
        for(i=1;i<=n;i++)
        {
            sum+=i;
        }
        System.out.print(sum);
    }
}
