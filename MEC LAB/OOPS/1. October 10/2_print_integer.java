import java.util.Scanner;
class numberinput
{
    public static void main(String[] args)
    {
        Scanner reader = new Scanner(System.in);
        System.out.print("Enter a number: ");
        int number = reader.nextInt();
        System.out.print("The number is "+number);
    }
}