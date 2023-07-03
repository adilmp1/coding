import java.util.Scanner;
class sumofarray{
    public static void main(String[] args)
    {
        Scanner read = new Scanner(System.in);
        int i,sum=0;
        int[] a = new int[20];
        System.out.print("Enter number of elements in the array: ");
        int n = read.nextInt();
        for(i=0;i<n;i++)
        {
            System.out.print("Enter element "+(i+1) + ": ");
            a[i]=read.nextInt();
        }
        for(i=0;i<n;i++)
        {
            sum+=a[i];
        }
        System.out.println(sum);

    }
}