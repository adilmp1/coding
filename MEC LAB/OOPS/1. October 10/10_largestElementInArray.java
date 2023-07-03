import java.util.Scanner;
class largestofarray{
    public static void main(String[] args)
    {
        Scanner read = new Scanner(System.in);
        int i,large;
        int[] a = new int[20];
        System.out.print("Enter number of elements in the array: ");
        int n = read.nextInt();
        for(i=0;i<n;i++)
        {
            System.out.print("Enter element "+(i+1) + ": ");
            a[i]=read.nextInt();
        }
        large = a[0];
        for(i=0;i<n;i++)
        {
            if(large<a[i])
            {
                large=a[i];
            }
        }
        System.out.println(large);

    }
}