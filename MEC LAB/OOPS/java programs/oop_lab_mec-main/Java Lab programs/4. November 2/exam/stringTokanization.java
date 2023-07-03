import java.util.*;
class token
{
    public static void main(String[] args) {
        Scanner read = new Scanner(System.in);
        String a,temp;;
        int n,sum=0;
        System.out.print("Enter the numbers: ");
        a = read.nextLine();
        StringTokenizer st = new StringTokenizer(a," ");
        while(st.hasMoreTokens())
        {
            temp = st.nextToken();
            n = Integer.parseInt(temp);
            System.out.println(n);
            sum+=n;
        }
        System.out.println("sum = "+sum);

    }
}