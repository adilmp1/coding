import java.util.Scanner;
class prime{
    public static void main(String[] args)
    {
        Scanner read = new Scanner(System.in);
        System.out.print("Enter the number: ");
        int n=read.nextInt(),i,flag=0;
        for(i=2;i<n/2;i++)
        {
            if(n%i==0)
            {
                flag=1;
                break;
            }
        }
        if(flag!=0)
        {
            System.out.print("Not prime");
        }
        else
        {
            System.out.print("prime");
        }
        read.close();
    }
}