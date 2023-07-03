import java.util.Scanner;
class sum{
    public static void main(String[] args){
        Scanner reader = new Scanner(System.in);
        System.out.print("Enter the first number: ");
        int num1 = reader.nextInt();

        System.out.print("Enter the second number: ");
        int num2 = reader.nextInt();

        System.out.print("Sum = " +(num1+num2));
    }
}
